#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Predicate_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/FloatStateMap_Mapping.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Predicate_1_FloatStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_FloatStateMap_Mapping_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288E680, bool, Invoke, (app::Predicate_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping obj))
    IL2CPP_REGISTER_METHOD(0x0288EB10, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_FloatStateMap_Mapping_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_FloatStateMap_Mapping_
