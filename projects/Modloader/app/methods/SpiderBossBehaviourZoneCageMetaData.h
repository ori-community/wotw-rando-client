#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossBehaviourZoneCageMetaData {
    IL2CPP_REGISTER_METHOD(0x00969490, void, OnEnable, (app::SpiderBossBehaviourZoneCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00969640, void, OnDisable, (app::SpiderBossBehaviourZoneCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009697F0, void, FaceAdded, (app::SpiderBossBehaviourZoneCageMetaData * this_ptr, app::CageStructureTool_Face* face))
    IL2CPP_REGISTER_METHODINFO(0x0478F2C8, SpiderBossBehaviourZoneCageMetaData_FaceAdded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00969930, void, ctor, (app::SpiderBossBehaviourZoneCageMetaData * this_ptr))
} // namespace app::classes::SpiderBossBehaviourZoneCageMetaData
