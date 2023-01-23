#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityWeightResolver__Class.h>
#include <Modloader/app/structs/EntityWeightResolver.h>

namespace app::classes::types {
    namespace EntityWeightResolver {
        inline app::EntityWeightResolver__Class** type_info = (app::EntityWeightResolver__Class**)(modloader::win::memory::resolve_rva(0x04716FB8));
        inline app::EntityWeightResolver__Class* get_class() {
            return il2cpp::get_class<app::EntityWeightResolver__Class>(type_info, "", "EntityWeightResolver");
        }
        inline app::EntityWeightResolver* create() {
            return il2cpp::create_object<app::EntityWeightResolver>(get_class());
        }
    } // namespace EntityWeightResolver
} // namespace app::classes::types
