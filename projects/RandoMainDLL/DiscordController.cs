using System;
using System.Net;
using System.Security.Cryptography;
using System.Threading;
using Discord;

namespace RandoMainDLL {
  public static class DiscordController {
    private static long CLIENT_ID = 751523174767919195;
    public static bool Disabled = false;
    public static Discord.UserManager UserManager {
      get {
        if(userManager == null) {
          userManager = discord.GetUserManager();
        }
        return userManager;
      }
    }
    private static Discord.UserManager userManager;
    public static Discord.Discord discord {
      get {
        if (_discord == null)
          _discord = new Discord.Discord(CLIENT_ID, (UInt64)Discord.CreateFlags.Default); ;
        return _discord;
      }
    }

    public static bool Initialized = false;
    public static Discord.User User;
    private static Discord.Discord _discord;
    public static Discord.ApplicationManager ApplicationManager;
    public static Discord.OAuth2Token Token;
    public static bool InitRunning = false;
    public static void Initialize() {
      if (InitRunning) {
        Randomizer.Log("Init running already, skipping", false, "DEBUG");
        return;
      }
      InitRunning = true;
      new Thread(() => {
        Disabled = AHK.IniFlag("DisableNetcode");
        if (Disabled) {
          Randomizer.Log("Netcode disabled, skipping discord init", false, "DEBUG");
          return;
        }
        discord.SetLogHook(Discord.LogLevel.Debug, (level, message) => Randomizer.Log($"discord: {message}", level.CompareTo(Discord.LogLevel.Info) > 0, level.ToString()));
        ApplicationManager = discord.GetApplicationManager();
        ApplicationManager.GetOAuth2Token((Discord.Result result, ref Discord.OAuth2Token token) => {
          try {
            if (result == Discord.Result.Ok) { // You may now use this token against Discord's HTTP API
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
        if(discord != null)
          discord?.RunCallbacks();
      } catch (Exception e) {
        Randomizer.Error("Discord callbacks", e, false);
      }
    }

    public static User? GetUser() {
      if(Disabled || InitRunning) 
        return null;
      try {
        return UserManager.GetCurrentUser();
      }
      catch(Exception e) {
        Randomizer.Error("GetUser", e, false);
        return null;
      }
    }

    public static void DiscordInitComplete() {
      if (Disabled) return;
      User = UserManager.GetCurrentUser();
      Randomizer.Log($"Discord; have user UID: {User.Id}", false);
      Randomizer.Client.Connect();

    }
  }
}
