#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PointerUIBase_PointerState.h>

namespace app::classes::System::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288FE90, bool, Invoke, (app::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::PointerUIBase_PointerState obj))
    IL2CPP_REGISTER_METHOD(0x02A57220, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::PointerUIBase_PointerState obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_
