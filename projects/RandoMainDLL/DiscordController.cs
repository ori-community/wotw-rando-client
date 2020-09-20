using System;
using System.Net;
using System.Security.Cryptography;
using System.Threading;
using Discord;

namespace RandoMainDLL {
  public static class DiscordController {
    private static long CLIENT_ID = 751523174767919195;
    public static bool Disabled = false;
    public static Discord.Discord discord;
    public static Discord.UserManager UserManager;
    public static bool Initialized = false;
    public static Discord.User User;
    public static Discord.ApplicationManager ApplicationManager;
    public static Discord.OAuth2Token Token;
    public static bool InitRunning = false;
    public static void Initialize() {
      if (discord == null)
        discord = new Discord.Discord(CLIENT_ID, (UInt64)Discord.CreateFlags.Default);
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
        discord.SetLogHook(LogLevel.Debug, (level, message) => Randomizer.Log($"discord: {message}", level.CompareTo(Discord.LogLevel.Info) > 0, level.ToString()));
        ApplicationManager.GetOAuth2Token((Result result, ref Discord.OAuth2Token token) => {
          try {
            if (result == Result.Ok) { // You may now use this token against Discord's HTTP API
              Token = token;
              Randomizer.Log($"Token for the user: {token.AccessToken}. Expires in {token.Expires}. Session ID: {WebSocketClient.SessionId}", false);
              InitRunning = false;
            }
            else {
              Randomizer.Log($"Got: {result}, token is ${token.AccessToken}", false);
              Token = token;
              InitRunning = false;
            }
          }
          catch (Exception e) {
            Randomizer.Error("appManager", e);
            InitRunning = false;
          }
        });
        UserManager.OnCurrentUserUpdate += DiscordInitComplete;
      }).Start();
    }

    public static void Update() {
        try {
        if (discord != null)
          discord?.RunCallbacks();
      } catch (Exception e) {
        if (e is NullReferenceException)
          return;
        Randomizer.Error("Discord callbacks", e, false);
      }
    }

    public static User? GetUser() {
      try {
        return UserManager.GetCurrentUser();
      }
      catch(Exception e) {
        if (e is Discord.ResultException) {
          Randomizer.Log($"Result exception {e} on GetUser, returning null", false);
          return null;
        }
        Randomizer.Error("GetUser", e, false);
        return null;
      }
    }

    public static void DiscordInitComplete() {
      if (Disabled) return;
      User = UserManager.GetCurrentUser();
      InitRunning = false;
      Randomizer.Log($"Discord; have user UID: {User.Id}", false);
      Randomizer.Client.Connect();

    }
  }
}
