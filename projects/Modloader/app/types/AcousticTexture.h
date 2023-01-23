#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AcousticTexture__Class.h>
#include <Modloader/app/structs/AcousticTexture.h>

namespace app::classes::types {
    namespace AcousticTexture {
        namespace {
            inline app::AcousticTexture__Class* type_info_ref = nullptr;
        }
        inline app::AcousticTexture__Class** type_info = &type_info_ref;
        inline app::AcousticTexture__Class* get_class() {
            return il2cpp::get_class<app::AcousticTexture__Class>(type_info, "AK.Wwise", "AcousticTexture");
        }
        inline app::AcousticTexture* create() {
            return il2cpp::create_object<app::AcousticTexture>(get_class());
        }
    } // namespace AcousticTexture
} // namespace app::classes::types
