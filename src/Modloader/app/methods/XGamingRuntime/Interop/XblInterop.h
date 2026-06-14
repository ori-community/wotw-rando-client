#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/XAsyncBlockPtr.h>
#include <Modloader/app/structs/XTaskQueueHandle.h>
#include <Modloader/app/structs/XUserHandle_1.h>
#include <Modloader/app/structs/XblAchievementOrderBy__Enum.h>
#include <Modloader/app/structs/XblAchievementType__Enum.h>
#include <Modloader/app/structs/XblAchievementsResultHandle_1.h>
#include <Modloader/app/structs/XblContextHandle_1.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::XGamingRuntime::Interop::XblInterop {
    IL2CPP_REGISTER_METHOD(
        0x030B3F20,
        int32_t,
        XblAchievementsResultGetAchievements,
        app::XblAchievementsResultHandle_1 result_handle,
        void** achievements,
        app::SizeT* achievements_count
    )
    IL2CPP_REGISTER_METHOD(
        0x030B3FD0,
        int32_t,
        XblAchievementsGetAchievementsForTitleIdAsync,
        app::XblContextHandle_1 xbox_live_context,
        uint64_t xbox_user_id,
        uint32_t title_id,
        app::XblAchievementType__Enum type,
        bool unlocked_only,
        app::XblAchievementOrderBy__Enum order_by,
        uint32_t skip_items,
        uint32_t max_items,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(
        0x030B40B0,
        int32_t,
        XblAchievementsGetAchievementsForTitleIdResult,
        app::XAsyncBlockPtr async_block,
        app::XblAchievementsResultHandle_1* result
    )
    IL2CPP_REGISTER_METHOD(
        0x030B4160,
        int32_t,
        XblAchievementsUpdateAchievementForTitleIdAsync,
        app::XblContextHandle_1 xbox_live_context,
        uint64_t xbox_user_id,
        uint32_t title_id,
        app::Byte__Array* service_configuration_id,
        app::Byte__Array* achievement_id,
        uint32_t percent_complete,
        app::XAsyncBlockPtr async_block
    )
    IL2CPP_REGISTER_METHOD(0x030B4250, int32_t, XblContextCreateHandle, app::XUserHandle_1 user, app::XblContextHandle_1* context)
    IL2CPP_REGISTER_METHOD(0x030B4300, void, XblContextCloseHandle, app::XblContextHandle_1 xbox_live_context_handle)
    IL2CPP_REGISTER_METHOD(0x030B43A0, int32_t, XblWrapper_XblInitialize, app::Byte__Array* scid, app::XTaskQueueHandle internal_work_queue)
    IL2CPP_REGISTER_METHOD(0x030B4450, int32_t, XblCleanupAsync, app::XAsyncBlockPtr async_block)
} // namespace app::classes::XGamingRuntime::Interop::XblInterop
