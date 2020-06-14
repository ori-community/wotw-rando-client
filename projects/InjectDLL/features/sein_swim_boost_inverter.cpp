#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>
#include <WinNetwork/ext.h>

namespace
{
    BINDING(34965920, UnityEngine_AnimationCurve_o*, UnityEngine_AnimationCurve__EaseInOut, (float timeStart, float valueStart, float timeEnd, float valueEnd));
}

void set_swim_params(float normal, float boost)
{
    auto swim = get_sein()->Abilities->SwimmingWrapper;
    if (swim->HasState)
    {
        swim->State->SwimSpeed = normal;
        swim->State->SwimSpeedBoostCurve = UnityEngine_AnimationCurve__EaseInOut(0.05, 1.f, 0.2, boost / normal);
    }
}

void set_default_inverted_swim_params()
{
    // Default boosted speed is 9.59... so we use 9.6
    set_swim_params(9.6f, 6.f);
}

namespace
{
    INTERCEPT(6709008, void, NewGameAction__Perform, (__int64 thisPtr, __int64 ctxPtr), {
        NewGameAction__Perform(thisPtr, ctxPtr);
        set_default_inverted_swim_params();
        });

    INTERCEPT(8237360, void, SaveGameController__SaveToFile, (SaveGameController_o* thisPtr, int32_t slotIndex, int32_t backupIndex, System_Byte_array* bytes), {
        SaveGameController__SaveToFile(thisPtr, slotIndex, -1, bytes);
        set_default_inverted_swim_params();
        });

    INTERCEPT(8297856, void, SaveSlotBackupsManager__PerformBackup, (SaveSlotBackupsManager_o* thisPtr, SaveSlotBackup_o* saveSlot, int32_t backupIndex, System_String_o* backupName), {
        SaveSlotBackupsManager__PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
        set_default_inverted_swim_params();
        });

    INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (SaveGameController_o* thisPtr), {
        SaveGameController__OnFinishedLoading(thisPtr);
        set_default_inverted_swim_params();
        });

    INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (SaveGameController_o* thisPtr), {
        SaveGameController__RestoreCheckpoint(thisPtr);
        set_default_inverted_swim_params();
        });

    INTERCEPT(18324032, void, SeinHealthController__OnRespawn, (SeinHealthController_o* thisPtr), {
        SeinHealthController__OnRespawn(thisPtr);
        set_default_inverted_swim_params();
        });
}
