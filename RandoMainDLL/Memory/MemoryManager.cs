using System;
using System.Collections.Generic;
using System.Diagnostics;

namespace RandoMainDLL.Memory {
  public partial class MemoryManager {
    public MemoryManager() {
      LastHooked = DateTime.MinValue;
    }

    private static readonly ProgramPointer Characters = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.Characters.SetCurrentCharacter", 0x15c),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "488B80B80000004C8B40084D85C0743D488B15????????B90C000000E8????????488BF84885DB743C488B4B304885C9742D33D2E8????????4885C0741B48897818488B5C24504883C4405FC3", -0x4, 0x0));
    private static readonly ProgramPointer GameWorld = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.V2, AutoDeref.Single, "__mainWisp.GameWorld.Awake", 0x79),
      new FindPointerSignature(PointerVersion.V2, AutoDeref.Single, "9033C9FF15????????90C605????????01488B05????????488B88B80000004C8931498B4E28498B46204885C00F84????????4885C90F84????????4C8B05????????8B5018E8????????458BFD418BD5498B4E204885C9", 0x14, 0x0),
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.GameWorld.Awake", 0xa7),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "4C8BDC55565741544155415641574883EC5049C743A8FEFFFFFF49895B104C8BE933ED", 0xa7, 0x0));
    private static readonly ProgramPointer PlayerUberStateGroup = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.Seinlevel.get_PartialHealthContainers", 0x68),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "488B05????????488B88B8000000488B014885C0742C488B48184885C9741D33D2E8????????4885C07423488B40184885C074148B40384883C448C3", 0x3, 0x0));
    private static readonly ProgramPointer TitleScreenManager = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.TitleScreenManager.Awake", 0x97),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B05????????F6802701000002741883B8D800000000750F488BC8E8????????488B05????????488B80B8000000488928488B05", 0x35, 0x0));
    private static readonly ProgramPointer GameStateMachine = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.GameStateMachine.get_Instance", 0x6f),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B1D????????488B83B8000000488B004885C00F85C6000000488BCBE8????????488B43604885C074278B08E8", 0x14, 0x0));
    private static readonly ProgramPointer GameController = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.GameController.Initialize", 0xc3),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "014C8975288B04244883EC20488D4C24308B0148894D20C785C0000000FFFFFFFF488B05????????F6802701000002741883B8D800000000750F488BC8", 0x45, 0x0));
    private static readonly ProgramPointer ScenesManager = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.ScenesManager.Awake", 0x76),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B05????????488B88B8000000488931488B1D????????488BCBE8????????488B43604885C074278B08E8????????483B05????????7517", 0x14, 0x0));
    private static readonly ProgramPointer UberStateController = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__uberSerialization.UberStateController.get_Instance", 0x90),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B1D????????F6832701000002741883BBD800000000750F488BCBE8????????488B1D????????488B83B800000048837828000F85", 0x35, 0x0));
    private static readonly ProgramPointer UberStateCollection = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__uberSerialization.UberStateCollection.GetGroup", 0x73),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B0D????????F6812701000002740E83B9D8000000007505E8????????33C9E8????????4885C07469488B58384885DB745A", 0x14, 0x0));
    private static readonly ProgramPointer DifficultyController = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.ConfirmChangingDifficulty.Perform", 0xdf),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B05????????488B88B8000000488B094885C974694533C08B5320E8????????488B05????????4885C07518", 0x14, 0x0));
    private static readonly ProgramPointer NoPausePatch = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.None, "__mainWisp.GameController.OnApplicationFocus", 0x1b),
      new FindPointerSignature(PointerVersion.All, AutoDeref.None, "4C8BDC565741564883EC5049C743C8FEFFFFFF49895B1049896B18??????488BF14533F6443835????????754B488B05????????4C6380C0000000488B05????????418B8C00????????418B9400????????4D8973D04D8973D84D8973E04D8D43D0E8????????9033C9FF15????????90C605????????0180BE????????000F85????????4084ED0F85????????33C9E8????????4885C00F84????????33D2488BC8E8????????84C07561", 0x1b, 0x0));
    private static readonly ProgramPointer TargetFrameRatePatch = new ProgramPointer("UnityPlayer.dll",
      new FindPointerSignature(PointerVersion.All, AutoDeref.None, "660F6EC30F5BC0F30F5EC8????8BDE??????????660F6EC80F5BC90F57C00F297424300F2FC1720A", 0xb));
    private static readonly ProgramPointer VSyncPatch = new ProgramPointer("UnityPlayer.dll",
      new FindPointerSignature(PointerVersion.All, AutoDeref.None, "E8????????4863484C488B4030488D148948C1E2058B4402684883C428C3", -0x4));
    private static readonly ProgramPointer FrameCounter = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.GameController.FixedUpdate", 0x1c8),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "80780A007538488B05????????F6802701000002741883B8D800000000750F488BC8E8????????488B05????????488B80B8000000FF0033C9", 0x2a, 0x0));
    private static readonly ProgramPointer CheatsHandler = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.CheatsHandler.Awake", 0x7a),
      new FindPointerSignature(PointerVersion.All, AutoDeref.Single, "9033C9FF15????????90C605????????01488B05????????F6802701000002741883B8D800000000750F488BC8E8????????488B05????????488B80B80000004C8938488B0D????????F6812701000002740E83B9D8000000007505E8", 0x14, 0x0));
    private static readonly ProgramPointer DebugControls = new ProgramPointer("GameAssembly.dll",
      new FindIl2Cpp(PointerVersion.All, AutoDeref.Single, "__mainWisp.AdvancedDebugMenuPage.DebugControlsSetter", 0x8e));
    public static PointerVersion Version { get; set; } = PointerVersion.All;

    public Process Program { get; set; }
    public bool IsHooked { get; set; }
    public DateTime LastHooked { get; set; }
    private bool? noPausePatched = null;
    private bool? targetFrameRatePatched = null;

    public string GamePointers() {
      return string.Concat(
        $"CHR: {Characters.GetPointer(Program)} ",
        $"GW: {GameWorld.GetPointer(Program)} ",
        $"PUS: {PlayerUberStateGroup.GetPointer(Program)} ",
        $"TSM: {TitleScreenManager.GetPointer(Program)} ",
        $"GSM: {GameStateMachine.GetPointer(Program)} ",
        $"GC: {GameController.GetPointer(Program)} ",
        $"SM: {ScenesManager.GetPointer(Program)} ",
        $"USC: {UberStateController.GetPointer(Program)} ",
        $"USL: {UberStateCollection.GetPointer(Program)} ",
        $"DC: {DifficultyController.GetPointer(Program)} ",
        $"FC: {FrameCounter.GetPointer(Program)} "
      );
    }

    public string Patches() => "NoPause: " + (!noPausePatched.HasValue ? "No Value" : noPausePatched.ToString()) + " FPS: " + (!targetFrameRatePatched.HasValue ? "No Value" : targetFrameRatePatched.ToString());

    public bool DebugEnabled() => CheatsHandler.Read<bool>(Program, 0xb8, 0x0, 0x20);

    public void EnableDebug(bool enable) {
      DebugControls.Write(Program, enable, 0xb8, 0x8);
      CheatsHandler.Write(Program, enable, 0xb8, 0x0, 0x20);
      CheatsHandler.Write(Program, enable ? (short)0x0101 : (short)0x0, 0xb8, 0x8);
    }

    // TitleScreenManager.Instance.m_currentScreen
    public Screen TitleScreen() => (Screen)TitleScreenManager.Read<int>(Program, 0xb8, 0x0, 0xb8);

    public bool IsLoadingGame() {
      //int m_isLoadingGame = FindIl2CppOffset.GetOffset(Program, "__mainWisp.GameController.m_isLoadingGame");
      int m_isLoadingGame = Version == PointerVersion.All ? 0x103 : 0x10b;
      //GameController.FreezeFixedUpdate || GameController.Instance.m_isLoadingGame
      if (GameController.Read<bool>(Program, 0xb8, 0xa) || GameController.Read<bool>(Program, 0xb8, 0x0, m_isLoadingGame)) {
        return true;
      }
      string scene = CurrentScene();
      return GameState == GameState.Game && (scene == "wotwTitleScreen" || scene == "kuFlyAway");
    }

    // Characters.Sein.PlatformBehaviour.PlatformMovement.m_prevPosition
    public Vector2 Position() => Characters.Read<Vector2>(Program, 0xb8, 0x10, 0x98, 0x18, 0xd0);

    // GameStateMachine.m_instance.CurrentState
    public GameState GameState => (GameState)GameStateMachine.Read<int>(Program, 0xb8, 0x0, 0x10);

    public void PatchNoPause(bool patch) {
      if (!noPausePatched.HasValue || patch != noPausePatched.Value) {
        if (NoPausePatch.GetPointer(Program) == IntPtr.Zero) { return; }

        if (patch) {
          NoPausePatch.Write(Program, new byte[] { 0xFF, 0xC5, 0x90 });
        }
        else {
          NoPausePatch.Write(Program, new byte[] { 0x0F, 0xB6, 0xEA });
        }
        noPausePatched = patch;
      }
    }

    public void PatchTargetFrameRate(bool patch) {
      if (!targetFrameRatePatched.HasValue || patch != targetFrameRatePatched.Value) {
        if (TargetFrameRatePatch.GetPointer(Program) == IntPtr.Zero) { return; }

        if (patch) {
          TargetFrameRatePatch.Write(Program, new byte[] { 0xB8, 0x3C, 0x00, 0x00, 0x00 });
          VSyncPatch.Write(Program, new byte[] { 0x33, 0xC0, 0xC3, 0x90 });
        }
        else {
          TargetFrameRatePatch.Write(Program, new byte[] { 0xE8, 0xE7, 0x1E, 0xFF, 0xFF });
          VSyncPatch.Write(Program, new byte[] { 0x48, 0x83, 0xEC, 0x28 });
        }
        targetFrameRatePatched = patch;
      }
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_isActive
    public bool IsActive() => PlayerUberStateGroup.Read<bool>(Program, 0xb8, 0x0, 0x18, 0x4C);

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Shards.m_shardsList
    public int Shards {
      get => PlayerUberStateGroup.Read<int>(Program, 0xb8, 0x0, 0x18, 0x30, 0x20, 0x28);
      set => PlayerUberStateGroup.Write(Program, value, 0xb8, 0x0, 0x18, 0x30, 0x20, 0x28);
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Shards
    public ulong ShardSlotPtr() {
      Shards = 9;
      return PlayerUberStateGroup.Read<ulong>(Program, 0xb8, 0x0, 0x18, 0x30, 0x20);
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Stats
    public Stats PlayerStats {
      get => PlayerUberStateGroup.Read<Stats>(Program, 0xb8, 0x0, 0x18, 0x30, 0x28, 0x10);
      set {
        byte[] data = new byte[16];
        byte[] healthBytes = BitConverter.GetBytes(value.Health);
        byte[] maxHealthBytes = BitConverter.GetBytes(value.MaxHealth);
        byte[] energyBytes = BitConverter.GetBytes(value.Energy);
        byte[] maxEnergyBytes = BitConverter.GetBytes(value.MaxEnergy);
        for (var i = 0; i < 4; i++) {
          data[i] = healthBytes[i];
          data[i + 4] = maxHealthBytes[i];
          data[i + 8] = energyBytes[i];
          data[i + 12] = maxEnergyBytes[i];
        }
        PlayerUberStateGroup.Write(Program, data, 0xb8, 0x0, 0x18, 0x30, 0x28, 0x10);
      }
    }

    public void FakeHalfHealth() {
      Stats stats = PlayerStats;
      stats.MaxHealth += 5;
      stats.Health = stats.MaxHealth;
      PlayerStats = stats;
    }

    public void FakeHalfEnergy() {
      Stats stats = PlayerStats;
      stats.MaxEnergy += 0.5f;
      stats.Energy = stats.MaxEnergy;
      PlayerStats = stats;
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_keystones
    public int Keystones {
      get => PlayerUberStateGroup.Read<int>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x28);
      set => PlayerUberStateGroup.Write(Program, value, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x28);
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_experience
    public int Mapstones {
      get => PlayerUberStateGroup.Read<int>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x2C);
      set => PlayerUberStateGroup.Write(Program, value, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x2C);
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_experience
    public int Experience {
      get => PlayerUberStateGroup.Read<int>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x30);
      set => PlayerUberStateGroup.Write(Program, value, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x30);
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_ore
    public int Ore {
      get => PlayerUberStateGroup.Read<int>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x34);
      set => PlayerUberStateGroup.Write(Program, value, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x34);
    }

    // Scenes.Manager.m_currentScene.Scene
    public string CurrentScene() {
      //int m_currentScene = FindIl2CppOffset.GetOffset(Program, "__mainWisp.ScenesManager.m_currentScene");
      int m_currentScene = Version == PointerVersion.All ? 0x180 : 0x190;
      return ScenesManager.Read(Program, 0xb8, 0x0, m_currentScene, 0x10, 0x0);
    }

    private static Dictionary<long, UberState> uberIDLookup = null;

    private void PopulateUberStates() {
      uberIDLookup = new Dictionary<long, UberState>();
      //UberStateCollection.Instance.m_descriptorsArray
      IntPtr descriptors = UberStateCollection.Read<IntPtr>(Program, 0xb8, 0x10, 0x20);
      //.Count
      int descriptorsCount = Program.Read<int>(descriptors, 0x18);
      byte[] data = Program.Read(descriptors + 0x20, descriptorsCount * 0x8);
      for (int i = 0; i < descriptorsCount; i++) {
        //.m_descriptorsArray[i]
        var descriptor = (IntPtr)BitConverter.ToUInt64(data, i * 0x8);

        UberStateType type = UberStateType.SerializedBooleanUberState;
        Enum.TryParse(Program.ReadAscii(descriptor, 0x0, 0x10, 0x0), out type);

        int groupOffset = 0x38;
        switch (type) {
          case UberStateType.SerializedByteUberState:
          case UberStateType.SerializedIntUberState:
          case UberStateType.SavePedestalUberState: groupOffset = 0x30; break;
          case UberStateType.PlayerUberStateDescriptor: groupOffset = 0x40; break;
          case UberStateType.CountUberState:
          case UberStateType.BooleanUberState:
          case UberStateType.ByteUberState:
          case UberStateType.IntUberState:
          case UberStateType.ConditionUberState: continue;
        }

        //.m_descriptorsArray[i].ID.m_id
        int id = Program.Read<int>(descriptor, 0x18, 0x10);
        //.m_descriptorsArray[i].Name
        IntPtr namePtr = Program.Read<IntPtr>(descriptor, 0x10, 0x48);
        string name = string.Empty;
        if (namePtr != IntPtr.Zero) {
          name = Program.ReadAscii(namePtr);
        }
        else {
          name = Program.ReadAscii(descriptor, 0x10, 0x50);
        }

        //.m_descriptorsArray[i].Group.ID.m_id
        int groupID = Program.Read<int>(descriptor, groupOffset, 0x18, 0x10);
        //.m_descriptorsArray[i].Group.Name
        namePtr = Program.Read<IntPtr>(descriptor, groupOffset, 0x10, 0x48);
        string groupName = string.Empty;
        if (namePtr != IntPtr.Zero) {
          groupName = Program.ReadAscii(namePtr);
        }
        else {
          groupName = Program.ReadAscii(descriptor, groupOffset, 0x10, 0x50);
        }
        var uberState = new UberState() { Type = type, ID = id, Name = name, GroupID = groupID, GroupName = groupName };
        uberIDLookup.Add(((long)groupID << 32) | (long)id, uberState);
      }
    }

    public Dictionary<long, UberState> GetUberStates() {
      if (uberIDLookup == null) {
        PopulateUberStates();
      }

      UpdateUberState();
      return uberIDLookup;
    }

    public void UpdateUberState(UberState uberState = null) {
      //UbserStateController.m_currentStateValueStore.m_groupMap
      IntPtr groups = UberStateController.Read<IntPtr>(Program, 0xb8, 0x40, 0x18);
      //.Count
      int groupCount = Program.Read<int>(groups, 0x20);
      //.Values
      groups = Program.Read<IntPtr>(groups, 0x18);
      byte[] groupsData = Program.Read(groups + 0x20, groupCount * 0x18);

      bool updateAll = uberState == null;
      for (int i = 0; i < groupCount; i++) {
        //.Values[i].m_id.m_id
        var group = (IntPtr)BitConverter.ToUInt64(groupsData, 0x10 + (i * 0x18));
        byte[] groupData = Program.Read(group + 0x18, 48);
        long groupID = Program.Read<int>((IntPtr)BitConverter.ToUInt64(groupData, 0), 0x10);

        if (!updateAll && groupID != uberState.GroupID) { continue; }

        //.Values[i].m_objectStateMap
        var map = (IntPtr)BitConverter.ToUInt64(groupData, 8);
        //.Values[i].m_objectStateMap.Count
        int mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (updateAll || uberState.IsObjectType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_objectStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (!updateAll && id != uberState.ID) { continue; }

            if (!updateAll || uberIDLookup.TryGetValue((groupID << 32) | id, out uberState)) {
              if (uberState.Type == UberStateType.SavePedestalUberState) {
                uberState.Value.Byte = Program.Read<byte>((IntPtr)BitConverter.ToUInt64(data, 0x10 + (j * 0x18)), 0x11);
              }
              else {
                //playerUberStateDescriptor
              }
            }
          }
        }

        //.Values[i].m_boolStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 16);
        //.Values[i].m_boolStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (updateAll || uberState.IsBoolType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_boolStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (!updateAll && id != uberState.ID) { continue; }

            if (!updateAll || uberIDLookup.TryGetValue((groupID << 32) | id, out uberState)) {
              uberState.Value.Bool = data[0x10 + (j * 0x18)] != 0;
            }
          }
        }

        //.Values[i].m_floatStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 24);
        //.Values[i].m_floatStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (updateAll || uberState.IsFloatType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_floatStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (!updateAll && id != uberState.ID) { continue; }

            if (!updateAll || uberIDLookup.TryGetValue((groupID << 32) | id, out uberState)) {
              uberState.Value.Float = BitConverter.ToSingle(data, 0x10 + (j * 0x18));
            }
          }
        }

        //.Values[i].m_intStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 32);
        //.Values[i].m_intStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (updateAll || uberState.IsIntType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_intStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (!updateAll && id != uberState.ID) { continue; }

            if (!updateAll || uberIDLookup.TryGetValue((groupID << 32) | id, out uberState)) {
              uberState.Value.Int = BitConverter.ToInt32(data, 0x10 + (j * 0x18));
            }
          }
        }

        //.Values[i].m_byteStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 40);
        //.Values[i].m_byteStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (updateAll || uberState.IsByteType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_byteStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (!updateAll && id != uberState.ID) { continue; }

            if (!updateAll || uberIDLookup.TryGetValue((groupID << 32) | id, out uberState)) {
              uberState.Value.Byte = data[0x10 + (j * 0x18)];
            }
          }
        }
      }
    }

    public void WriteUberState(UberState uberState) {
      //UbserStateController.m_currentStateValueStore.m_groupMap
      IntPtr groups = UberStateController.Read<IntPtr>(Program, 0xb8, 0x40, 0x18);
      //.Count
      int groupCount = Program.Read<int>(groups, 0x20);
      //.Values
      groups = Program.Read<IntPtr>(groups, 0x18);
      byte[] groupsData = Program.Read(groups + 0x20, groupCount * 0x18);
      for (int i = 0; i < groupCount; i++) {
        //.Values[i].m_id.m_id
        var group = (IntPtr)BitConverter.ToUInt64(groupsData, 0x10 + (i * 0x18));
        byte[] groupData = Program.Read(group + 0x18, 48);
        long groupID = Program.Read<int>((IntPtr)BitConverter.ToUInt64(groupData, 0), 0x10);

        if (groupID != uberState.GroupID) { continue; }

        //.Values[i].m_objectStateMap
        var map = (IntPtr)BitConverter.ToUInt64(groupData, 8);
        //.Values[i].m_objectStateMap.Count
        int mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (uberState.IsObjectType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_objectStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (id != uberState.ID) { continue; }
            if (uberState.Type == UberStateType.SavePedestalUberState) {
              // uberState.Value.Byte = Program.Read<byte>((IntPtr)BitConverter.ToUInt64(data, 0x10 + (j * 0x18)), 0x11);
              Program.Write((IntPtr)BitConverter.ToUInt64(data, 0x10 + (j * 0x18)), uberState.Value.Byte, 0x11);
            }
            else {
              //playerUberStateDescriptor
            }
          }
        }

        //.Values[i].m_boolStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 16);
        //.Values[i].m_boolStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (uberState.IsBoolType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_boolStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (id != uberState.ID) { continue; }
            //                        uberState.Value.Bool = data[0x10 + (j * 0x18)] != 0;
            Program.Write(map + 0x20, uberState.Value.Byte, 0x10 + (j * 0x18));
          }
        }

        //.Values[i].m_floatStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 24);
        //.Values[i].m_floatStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (uberState.IsFloatType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_floatStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (id != uberState.ID) { continue; }
            //  uberState.Value.Float = BitConverter.ToSingle(data, 0x10 + (j * 0x18));
            Program.Write(map + 0x20, uberState.Value.Float, 0x10 + (j * 0x18));
          }
        }

        //.Values[i].m_intStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 32);
        //.Values[i].m_intStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (uberState.IsIntType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_intStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (id != uberState.ID) { continue; }
            //   uberState.Value.Int = BitConverter.ToInt32(data, 0x10 + (j * 0x18));
            Program.Write(map + 0x20, uberState.Value.Int, 0x10 + (j * 0x18));
          }
        }

        //.Values[i].m_byteStateMap
        map = (IntPtr)BitConverter.ToUInt64(groupData, 40);
        //.Values[i].m_byteStateMap.Count
        mapCount = Program.Read<int>(map, 0x20);
        if (mapCount > 0 && (uberState.IsByteType)) {
          map = Program.Read<IntPtr>(map, 0x18);
          byte[] data = Program.Read(map + 0x20, mapCount * 0x18);
          for (int j = 0; j < mapCount; j++) {
            //.Values[i].m_byteStateMap.Keys[j]
            long id = BitConverter.ToInt32(data, j * 0x18);

            if (id != uberState.ID) { continue; }

            // uberState.Value.Byte = data[0x10 + (j * 0x18)];
            Program.Write(map + 0x20, uberState.Value.Byte, 0x10 + (j * 0x18));

          }
        }
      }
    }

    public bool HasAbility(AbilityType type) {
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Abilities.m_abilitiesList
      IntPtr abilities = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x10, 0x18);
      //.Count
      int count = Program.Read<int>(abilities, 0x18);
      //.Items
      abilities = Program.Read<IntPtr>(abilities, 0x10);
      byte[] data = Program.Read(abilities + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Ability ability = Program.Read<Ability>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (ability.Type == type) {
          return ability.HasAbility == 1;
        }
      }
      return false;
    }

    public void SetAbility(AbilityType type, bool setTo = true) {
      IntPtr abilities = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x10, 0x18);
      //.Count
      int count = Program.Read<int>(abilities, 0x18);
      //.Items
      abilities = Program.Read<IntPtr>(abilities, 0x10);
      byte[] data = Program.Read(abilities + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Ability ability = Program.Read<Ability>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (ability.Type == type) {
          ability.HasAbility = (byte)(setTo ? 1 : 0);
          Program.Write((IntPtr)BitConverter.ToUInt64(data, i * 0x8), ability.ToBytes(), 0x10);
          if (AbilityToEquip.ContainsKey(type)) {
            SetInvItem(AbilityToEquip[type], setTo);
          }

          return;
        }
      }
    }

    public Dictionary<AbilityType, Ability> PlayerAbilities() {
      var currentAbilities = new Dictionary<AbilityType, Ability>();
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Abilities.m_abilitiesList
      IntPtr abilities = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x10, 0x18);
      //.Count
      int count = Program.Read<int>(abilities, 0x18);
      //.Items
      abilities = Program.Read<IntPtr>(abilities, 0x10);
      byte[] data = Program.Read(abilities + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Ability ability = Program.Read<Ability>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (Enum.IsDefined(typeof(AbilityType), ability.Type)) {
          currentAbilities[ability.Type] = ability;
        }
      }
      return currentAbilities;
    }

    public bool HasShard(ShardType type) {
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Shards.m_shardsList
      IntPtr shards = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x20, 0x18);
      //.Count
      int count = Program.Read<int>(shards, 0x18);
      //.Items
      shards = Program.Read<IntPtr>(shards, 0x10);
      byte[] data = Program.Read(shards + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Shard shard = Program.Read<Shard>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (shard.Type == type) {
          return shard.Gained == 1;
        }
      }
      return false;
    }

    public bool HasInvItem(EquipmentType type) {
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_inventory
      IntPtr items = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x10);
      //.Count
      int count = Program.Read<int>(items, 0x18);
      //.Items
      items = Program.Read<IntPtr>(items, 0x10);
      byte[] data = Program.Read(items + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        InventoryItem item = Program.Read<InventoryItem>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", "Inventory Item: " + item.ToString() + "\n");

        if (item.Type == type) {
          return item.Unlocked == 1;
        }
      }
      return false;
    }

    public void SetInvItem(EquipmentType type, bool setTo = true) {
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_inventory
      IntPtr items = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x10);
      //.Count
      int count = Program.Read<int>(items, 0x18);
      //.Items
      items = Program.Read<IntPtr>(items, 0x10);
      byte[] data = Program.Read(items + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        InventoryItem item = Program.Read<InventoryItem>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (item.Type == type) {
          item.Unlocked = (byte)(setTo ? 1 : 0);
          Program.Write((IntPtr)BitConverter.ToUInt64(data, i * 0x8), item.ToBytes(), 0x10);
          return;
        }
      }
      return;
    }

    // PlayerUberStateGroup.Instance.PlayerUberState.m_state.Inventory.m_bindings
    public void SetBound(EquipmentType type) {
      return; // this function stubbed out because it crashes and i have no idea why. seems like it should work!!!
      /*
      IntPtr items = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x18, 0x18);
      var invItem = new InventoryItem { Type = type, Unlocked = 1 };
      // .Items [0] <-
      Program.Write(items, invItem.ToBytes(), 0x10, 0x20);
      */
    }

    public void SetShard(ShardType type, bool setTo = true) {
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Shards.m_shardsList
      IntPtr shards = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x20, 0x18);
      //.Count
      int count = Program.Read<int>(shards, 0x18);
      //.Items
      shards = Program.Read<IntPtr>(shards, 0x10);
      byte[] data = Program.Read(shards + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Shard shard = Program.Read<Shard>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (shard.Type == type) {

          shard.Gained = (byte)(setTo ? 1 : 0);
          // System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", "Setting shard: " + shard.ToString() + "\n");
          Program.Write((IntPtr)BitConverter.ToUInt64(data, i * 0x8), shard.ToBytes(), 0x10);
          return;
        }
      }
    }

    public Dictionary<ShardType, Shard> PlayerShards() {
      var currentShards = new Dictionary<ShardType, Shard>();
      //PlayerUberStateGroup.Instance.PlayerUberState.m_state.Shards.m_shardsList
      IntPtr shards = PlayerUberStateGroup.Read<IntPtr>(Program, 0xb8, 0x0, 0x18, 0x30, 0x20, 0x18);
      //.Count
      int count = Program.Read<int>(shards, 0x18);
      //.Items
      shards = Program.Read<IntPtr>(shards, 0x10);
      byte[] data = Program.Read(shards + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        //.Items[i]
        Shard shard = Program.Read<Shard>((IntPtr)BitConverter.ToUInt64(data, i * 0x8), 0x10);
        if (Enum.IsDefined(typeof(ShardType), shard.Type)) {
          currentShards[shard.Type] = shard;
          // System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", "shard: " + shard.ToString() + "\n");
        }
      }
      return currentShards;
    }

    public float MapCompletion(AreaType areaType = AreaType.None) {
      float totalCompletion = 0;
      //GameWorld.RuntimeAreas
      IntPtr areas = GameWorld.Read<IntPtr>(Program, 0xb8, 0x0, 0x28);
      //.Count
      int count = Program.Read<int>(areas, 0x18);
      //.Items
      areas = Program.Read<IntPtr>(areas, 0x10);
      byte[] data = Program.Read(areas + 0x20, count * 0x8);
      for (int i = 0; i < count; i++) {
        var area = (IntPtr)BitConverter.ToUInt64(data, i * 0x8);
        if (areaType != AreaType.None) {
          //.Items[i].Area.WorldMapAreaUniqueID
          AreaType type = Program.Read<AreaType>(area, 0x10, 0x20);
          if (type == areaType) {
            //.Items[i].m_completionAmount
            return Program.Read<float>(area, 0x34) * 100f;
          }
        }
        else {
          //.Items[i].m_completionAmount
          totalCompletion += Program.Read<float>(area, 0x34);
        }
      }
      return totalCompletion * 100f / count;
    }

    // GameWorld.CurrentArea.Area.WorldMapAreaUniqueID
    public AreaType PlayerArea() => GameWorld.Read<AreaType>(Program, 0xb8, 0x0, 0x30, 0x10, 0x20);

    public ulong GameControllerInstancePointer() => GameController.Read<ulong>(Program, 0xb8, 0x0);

    // GameController.Instance.Timer.CurrentTime
    public double ElapsedTime() => GameController.Read<double>(Program, 0xb8, 0x0, 0x28, 0x20);

    // Characters.Sein.PlatformBehaviour.Mortality.DamageReciever.m_died
    public bool Dead() => Characters.Read<bool>(Program, 0xb8, 0x10, 0x88, 0x10, 0xe4);

    public bool HookProcess() {
      try {
        IsHooked = Program != null && !Program.HasExited;
        if (!IsHooked && DateTime.Now > LastHooked.AddSeconds(1)) {
          LastHooked = DateTime.Now;
          Process[] processes = Process.GetProcessesByName("OriWotW");
          Program = processes != null && processes.Length > 0 ? processes[0] : null;

          if (Program == null) {
            processes = Process.GetProcessesByName("OriAndTheWillOfTheWisps");
            Program = processes != null && processes.Length > 0 ? processes[0] : null;
          }

          if (Program == null) {
            processes = Process.GetProcessesByName("OriAndTheWillOfTheWisps-PC");
            Program = processes != null && processes.Length > 0 ? processes[0] : null;
          }

          if (Program != null && !Program.HasExited) {
            MemoryReader.Update64Bit(Program);
            FindIl2Cpp.InitializeIl2Cpp(Program);
            Module64 module = Program.Module64("GameAssembly.dll");
            Version = PointerVersion.All;
            if (module != null) {
              switch (module.MemorySize) {
                case 77447168: Version = PointerVersion.V2; break;
              }
            }
            uberIDLookup = null;
            noPausePatched = null;
            targetFrameRatePatched = null;
            IsHooked = true;
          }
        }

        return IsHooked;
      }
      catch (Exception e) {
        System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", "Error: " + e.Message + "\n" + e.StackTrace);
        return false;
      }
    }

    public void Dispose() => Program?.Dispose();

    private readonly Dictionary<AbilityType, EquipmentType> AbilityToEquip = new Dictionary<AbilityType, EquipmentType>() {
      { AbilityType.Bash, EquipmentType.Ability_Bash },
      { AbilityType.DoubleJump, EquipmentType.Ability_DoubleJump },
      { AbilityType.Launch, EquipmentType.Spell_ChargeJump },
      { AbilityType.Feather, EquipmentType.AutoAbility_Glide },
      { AbilityType.WaterBreath, EquipmentType.AutoAbility_WaterBreath},
      { AbilityType.LightBurst, EquipmentType.Spell_StickyMine},
      { AbilityType.Grapple, EquipmentType.Ability_Leash },
      { AbilityType.Flash, EquipmentType.Spell_Glow },
      { AbilityType.Spike, EquipmentType.Spell_Spear },
      { AbilityType.Regenerate, EquipmentType.Spell_Meditate },
      { AbilityType.SpiritArc, EquipmentType.Weapon_Bow },
      { AbilityType.SpiritSmash, EquipmentType.Weapon_Hammer},
      { AbilityType.SpiritEdge, EquipmentType.Weapon_Sword },
      { AbilityType.Burrow, EquipmentType.Ability_Digging },
      { AbilityType.Dash, EquipmentType.AutoAbility_Dash },
      { AbilityType.WaterDash, EquipmentType.AutoAbility_WaterDash},
      { AbilityType.SpiritStar, EquipmentType.Spell_Chakram},
      { AbilityType.Seir, EquipmentType.Spell_GoldenSein},
      { AbilityType.Blaze, EquipmentType.Spell_Blaze},
      { AbilityType.Flap, EquipmentType.Ability_FeatherFlap},
      { AbilityType.Sentry, EquipmentType.Spell_Turret },
      { AbilityType.DamageUpgrade1, EquipmentType.AutoAbility_DamageUpgradeA},
      { AbilityType.DamageUpgrade2, EquipmentType.AutoAbility_DamageUpgradeB},
    };
  }
}
