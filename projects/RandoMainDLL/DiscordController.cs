using System;
using System.Net;
using System.Security.Cryptography;

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
    public static void Initialize() {
      Disabled = AHK.IniFlag("DisableNetcode");
      if (Disabled) {
        Randomizer.Log("Netcode disabled, skipping discord init", false, "DEBUG");
        return;
      } 
      ApplicationManager = discord.GetApplicationManager();
      ApplicationManager.GetOAuth2Token((Discord.Result result, ref Discord.OAuth2Token token) => {
        try {
          if (result == Discord.Result.Ok) { // You may now use this token against Discord's HTTP API
            Token = token;
            var client = new WebClient();
            client.UploadString($"https://{WebSocketClient.Domain}/api/sessions/", token.AccessToken);
            var rawCookie = client.ResponseHeaders.Get("Set-Cookie");
            WebSocketClient.SessionId = rawCookie.Split(';')[0].Split('=')[1];
            Randomizer.Log($"Token for the user: {token.AccessToken}. Expires in {token.Expires}. Session ID: {WebSocketClient.SessionId}", false);
            Initialized = true;
          }
          else {
            Randomizer.Log($"Got: {result}");
          }
        }
        catch (Exception e) {
          Randomizer.Error("appManager", e);
        }
      });
     UserManager.OnCurrentUserUpdate += DiscordInitComplete;
    }

    public static void Update() {
      if(Disabled) return;
      try {
        discord?.RunCallbacks();
      } catch (Exception e) {
        Randomizer.Error("Discord callbacks", e, false);
      }
    }

    public static void DiscordInitComplete() {
      if (Disabled) return;
      Randomizer.Client.Connect();
      User = UserManager.GetCurrentUser();

    }
  }
}
