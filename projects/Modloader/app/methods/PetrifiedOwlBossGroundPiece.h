#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossGroundPiece.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlBossGroundPiece {
    IL2CPP_REGISTER_METHOD(0x017727F0, void, Awake, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772990, void, OnDestroy, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772B30, void, OnPostRestoreCheckpoint, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IsBreakable, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772C00, bool, IsBroken, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772C30, void, Break, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01772D30, bool, TryBreak, (app::PetrifiedOwlBossGroundPiece * this_ptr, app::Vector3 pos))
    IL2CPP_REGISTER_METHOD(0x01772E80, app::Vector3, GetGroundCenterPosition, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E21060, void, PlayOffLimitsAnticipationFeedback, (app::PetrifiedOwlBossGroundPiece * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PetrifiedOwlBossGroundPiece * this_ptr))
} // namespace app::classes::PetrifiedOwlBossGroundPiece
