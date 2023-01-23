#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CC_Grayscale__Class.h>
#include <Modloader/app/structs/CC_Grayscale.h>

namespace app::classes::types {
    namespace CC_Grayscale {
        namespace {
            inline app::CC_Grayscale__Class* type_info_ref = nullptr;
        }
        inline app::CC_Grayscale__Class** type_info = &type_info_ref;
        inline app::CC_Grayscale__Class* get_class() {
            return il2cpp::get_class<app::CC_Grayscale__Class>(type_info, "", "CC_Grayscale");
        }
        inline app::CC_Grayscale* create() {
            return il2cpp::create_object<app::CC_Grayscale>(get_class());
        }
    } // namespace CC_Grayscale
} // namespace app::classes::types
