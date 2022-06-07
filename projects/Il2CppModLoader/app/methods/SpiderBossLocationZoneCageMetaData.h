#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiderBossLocationZoneCageMetaData {
    IL2CPP_REGISTER_METHOD(0x011B3F60, void, OnEnable, (app::SpiderBossLocationZoneCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B4110, void, OnDisable, (app::SpiderBossLocationZoneCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B42C0, void, FaceAdded, (app::SpiderBossLocationZoneCageMetaData * this_ptr, app::CageStructureTool_Face * face))
    IL2CPP_REGISTER_METHODINFO(0x04735150, SpiderBossLocationZoneCageMetaData_FaceAdded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011B4400, void, ctor, (app::SpiderBossLocationZoneCageMetaData * this_ptr))
}
