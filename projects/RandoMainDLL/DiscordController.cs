using System;

namespace RandoMainDLL {
  public static class DiscordController {
    private static long CLIENT_ID = 751523174767919195;
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
    public static bool ConnectToServer = false;
    public static Discord.User User;
    private static Discord.Discord _discord;
    public static Discord.ApplicationManager ApplicationManager;
    public static void Initialize() {
      ApplicationManager = discord.GetApplicationManager();
      ApplicationManager.GetOAuth2Token((Discord.Result result, ref Discord.OAuth2Token token) => {
        try {
          if (result == Discord.Result.Ok) {
            Randomizer.Log($"Token for the user: {token.AccessToken}. Expires in {token.Expires}");
            // You may now use this token against Discord's HTTP API
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
      discord?.RunCallbacks();
    }

    public static void DiscordInitComplete() {
      Initialized = true;
      User = UserManager.GetCurrentUser();
      Randomizer.Log($"ID: {User.Id}, name: {User.Username}");

      if (ConnectToServer) {
        SeedController.ConnectToServer();
        ConnectToServer = false;
      }
    }
  }
}
