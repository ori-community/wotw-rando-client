#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConceptScreen_ImageData.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::ConceptScreen_ImageData {
    IL2CPP_REGISTER_METHOD(0x011E3CB0, void, ctor, (app::ConceptScreen_ImageData * this_ptr, app::Texture2D* image, float width, float height))
}
