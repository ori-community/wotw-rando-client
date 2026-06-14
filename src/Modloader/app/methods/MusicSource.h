#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MusicSource.h>

namespace app::classes::MusicSource {
    IL2CPP_REGISTER_METHOD(0x0087E710, void, Start, app::MusicSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0087E720, void, Play, app::MusicSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0087E8E0, void, Stop, app::MusicSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0087E980, void, OnDestroy, app::MusicSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MusicSource* this_ptr)
} // namespace app::classes::MusicSource
