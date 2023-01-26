#pragma once
#include <Modloader/app/structs/AcousticTexture.h>
#include <Modloader/app/structs/AcousticTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcousticTexture {
        inline app::AcousticTexture__Class** type_info() {
            static app::AcousticTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AcousticTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AcousticTexture__Class* get_class() {
            return il2cpp::get_class<app::AcousticTexture__Class>(type_info(), "AK.Wwise", "AcousticTexture");
        }
        inline app::AcousticTexture* create() {
            return il2cpp::create_object<app::AcousticTexture>(get_class());
        }
    } // namespace AcousticTexture
} // namespace app::classes::types
