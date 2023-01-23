#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderWorldHierarchy__Class.h>
#include <Modloader/app/structs/UberShaderWorldHierarchy.h>

namespace app::classes::types {
    namespace UberShaderWorldHierarchy {
        namespace {
            inline app::UberShaderWorldHierarchy__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderWorldHierarchy__Class** type_info = &type_info_ref;
        inline app::UberShaderWorldHierarchy__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldHierarchy__Class>(type_info, "", "UberShaderWorldHierarchy");
        }
        inline app::UberShaderWorldHierarchy* create() {
            return il2cpp::create_object<app::UberShaderWorldHierarchy>(get_class());
        }
    } // namespace UberShaderWorldHierarchy
} // namespace app::classes::types
