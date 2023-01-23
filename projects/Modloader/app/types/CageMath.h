#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageMath__Class.h>
#include <Modloader/app/structs/CageMath.h>

namespace app::classes::types {
    namespace CageMath {
        namespace {
            inline app::CageMath__Class* type_info_ref = nullptr;
        }
        inline app::CageMath__Class** type_info = &type_info_ref;
        inline app::CageMath__Class* get_class() {
            return il2cpp::get_class<app::CageMath__Class>(type_info, "", "CageMath");
        }
        inline app::CageMath* create() {
            return il2cpp::create_object<app::CageMath>(get_class());
        }
    } // namespace CageMath
} // namespace app::classes::types
