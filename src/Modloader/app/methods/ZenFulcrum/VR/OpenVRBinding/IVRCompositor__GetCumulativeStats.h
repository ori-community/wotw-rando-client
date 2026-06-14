#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Compositor_CumulativeStats.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRCompositor_GetCumulativeStats.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCumulativeStats {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRCompositor_GetCumulativeStats* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02187340,
        void,
        Invoke,
        app::IVRCompositor_GetCumulativeStats* this_ptr,
        app::Compositor_CumulativeStats* p_stats,
        uint32_t n_stats_size_in_bytes
    )
    IL2CPP_REGISTER_METHOD(
        0x02F41B00,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRCompositor_GetCumulativeStats* this_ptr,
        app::Compositor_CumulativeStats* p_stats,
        uint32_t n_stats_size_in_bytes,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x006FD370,
        void,
        EndInvoke,
        app::IVRCompositor_GetCumulativeStats* this_ptr,
        app::Compositor_CumulativeStats* p_stats,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCumulativeStats
