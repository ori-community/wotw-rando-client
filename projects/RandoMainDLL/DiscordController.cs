using System;
using System.Net;
using System.Security.Cryptography;
using System.Threading;
using Discord;

namespace RandoMainDLL {
  public static class DiscordController {
    private static long CLIENT_ID = 751523174767919195;
    public static bool Disabled = false;
    public static UserManager UserManager;
    public static bool Initialized = false;
    public static User User;
    public static ApplicationManager ApplicationManager;
    public static OAuth2Token Token;
    public static bool InitRunning = false;
    public static Discord.Discord discord;
    public static void Initialize() {
      if (discord == null)
        discord = new Discord.Discord(CLIENT_ID, (UInt64)CreateFlags.Default);
      if(UserManager == null) 
        UserManager = discord.GetUserManager();
      if(ApplicationManager == null)
        ApplicationManager = discord.GetApplicationManager();
      Initialized = true;
      if (GetUser() != null) {
        Randomizer.Log("User already known, skipping rest of discord init", false, "DEBUG");
        Randomizer.Client.Connect();
        return;
      }
      if (InitRunning) {
        Randomizer.Log("Init running already, skipping", false, "DEBUG");
        return;
      }
      InitRunning = true;
      new Thread(() => {
        Disabled = AHK.IniFlag("DisableNetcode");
        if (Disabled) {
          Randomizer.Log("Netcode disabled, skipping discord init", false, "DEBUG");
          InitRunning = false;
          return;
        }
        discord.SetLogHook(LogLevel.Debug, (level, message) => Randomizer.Log($"discord: {message}", level.CompareTo(LogLevel.Info) > 0, level.ToString()));
        UserManager.OnCurrentUserUpdate += DiscordInitComplete;
        InitRunning = false;
      }).Start();
    }

    public static void Update() {
        try {
          discord?.RunCallbacks();
        } catch (Exception e) {
        if (e is NullReferenceException)
          return;
        Randomizer.Error("Discord callbacks", e, false);
      }
    }

    public static User? GetUser() {
      if (Disabled || InitRunning) return null;
      try {
        return UserManager.GetCurrentUser();
      }
      catch(Exception e) {
        if (e is ResultException re) {
          if(re.Result != Result.NotFound) {
            Randomizer.Log($"Result {re.Result} on GetUser, returning null", false);
          }
          if (CanTryToken) {
            Randomizer.Debug("Discord user not found. Attempting to get token...");
            new Thread(() => TryGetToken()).Start();
          }
          return null;
        }
        Randomizer.Error("GetUser", e, false);
        return null;
      }
    }

    public static bool CanTryToken = true;

    public static void TryGetToken() {
      if (Disabled || InitRunning) return;
      CanTryToken = false;
      ApplicationManager.GetOAuth2Token((Result result, ref OAuth2Token token) => {
        try {
          if (result == Result.Ok) { // You may now use this token against Discord's HTTP API
            Token = token;
            Randomizer.Log($"Token for the user: {token.AccessToken}. Expires in {token.Expires}. Session ID: {WebSocketClient.SessionId}", false);
          }
          else {
            Randomizer.Log($"Got: {result}, token is ${token.AccessToken}", false);
            Token = token;
          }
        }
        catch (Exception e) {
          if (e is ResultException re) {
            Randomizer.Debug($"Got result {re.Result} when grabbing token");
          }
          else
            Randomizer.Error("appManager", e);
        }
      });
    }

    public static void DiscordInitComplete() {
      if (Disabled) return;
      User = UserManager.GetCurrentUser();
      InitRunning = false;
      Randomizer.Log($"have user UID: {User.Id}", false);
      Randomizer.Client.Connect();

    }
  }
}
