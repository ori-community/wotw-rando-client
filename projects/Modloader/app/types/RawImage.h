#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RawImage__Class.h>
#include <Modloader/app/structs/RawImage.h>

namespace app::classes::types {
    namespace RawImage {
        namespace {
            inline app::RawImage__Class* type_info_ref = nullptr;
        }
        inline app::RawImage__Class** type_info = &type_info_ref;
        inline app::RawImage__Class* get_class() {
            return il2cpp::get_class<app::RawImage__Class>(type_info, "UnityEngine.UI", "RawImage");
        }
        inline app::RawImage* create() {
            return il2cpp::create_object<app::RawImage>(get_class());
        }
    } // namespace RawImage
} // namespace app::classes::types
