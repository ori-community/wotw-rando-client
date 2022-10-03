#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x023B76B0, void, Invoke, (app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * this_ptr, app::Guid* source_id, int32_t is_enabled, uint8_t level, int64_t match_any_keywords, int64_t match_all_keywords, app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filter_data, app::Void* callback_context))
    IL2CPP_REGISTER_METHOD(0x023B7C70, app::IAsyncResult*, BeginInvoke, (app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * this_ptr, app::Guid* source_id, int32_t is_enabled, uint8_t level, int64_t match_any_keywords, int64_t match_all_keywords, app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filter_data, app::Void* callback_context, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback * this_ptr, app::Guid* source_id, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback
