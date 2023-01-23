#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LowerResBlitTexture__Class.h>
#include <Modloader/app/structs/LowerResBlitTexture.h>

namespace app::classes::types {
    namespace LowerResBlitTexture {
        namespace {
            inline app::LowerResBlitTexture__Class* type_info_ref = nullptr;
        }
        inline app::LowerResBlitTexture__Class** type_info = &type_info_ref;
        inline app::LowerResBlitTexture__Class* get_class() {
            return il2cpp::get_class<app::LowerResBlitTexture__Class>(type_info, "UnityEngine", "LowerResBlitTexture");
        }
        inline app::LowerResBlitTexture* create() {
            return il2cpp::create_object<app::LowerResBlitTexture>(get_class());
        }
    } // namespace LowerResBlitTexture
} // namespace app::classes::types
