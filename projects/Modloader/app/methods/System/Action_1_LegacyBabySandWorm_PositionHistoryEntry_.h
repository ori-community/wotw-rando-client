#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_LegacyBabySandWorm_PositionHistoryEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_LegacyBabySandWorm_PositionHistoryEntry_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_LegacyBabySandWorm_PositionHistoryEntry_ * this_ptr, app::LegacyBabySandWorm_PositionHistoryEntry obj))
    IL2CPP_REGISTER_METHOD(0x029FEC90, app::IAsyncResult*, BeginInvoke, (app::Action_1_LegacyBabySandWorm_PositionHistoryEntry_ * this_ptr, app::LegacyBabySandWorm_PositionHistoryEntry obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_LegacyBabySandWorm_PositionHistoryEntry_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_LegacyBabySandWorm_PositionHistoryEntry_
