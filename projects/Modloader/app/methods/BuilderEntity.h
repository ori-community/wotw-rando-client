#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/BuilderEntity.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BuilderEntity {
    IL2CPP_REGISTER_METHOD(0x00816030, app::ITimelineEntity*, get_CurrentProject, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00816170, app::MessageProvider*, get_FinishedProjectMessage, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008162B0, app::BuilderEntity*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00816330, void, set_Instance, (app::BuilderEntity * value))
    IL2CPP_REGISTER_METHOD(0x008163C0, void, Awake, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008163F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00816400, app::String*, get_DialogActorName, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00816480, app::String*, get_InteractionActorName, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00816500, void, PlayIdleAnimation, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00816750, void, LateUpdate, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008167A0, void, OnUpdate, (app::BuilderEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008168D0, void, OnInteractionStart, (app::BuilderEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x008168F0, void, OnInteractionEnd, (app::BuilderEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::BuilderEntity * this_ptr))
} // namespace app::classes::BuilderEntity
