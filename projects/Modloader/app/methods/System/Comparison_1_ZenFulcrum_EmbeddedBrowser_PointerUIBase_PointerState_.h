#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PointerUIBase_PointerState.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B89D50, int32_t, Invoke, (app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::PointerUIBase_PointerState x, app::PointerUIBase_PointerState y))
    IL2CPP_REGISTER_METHOD(0x02C86320, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::PointerUIBase_PointerState x, app::PointerUIBase_PointerState y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_
