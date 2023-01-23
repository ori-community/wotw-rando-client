#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericPoser__Class.h>
#include <Modloader/app/structs/GenericPoser.h>

namespace app::classes::types {
    namespace GenericPoser {
        namespace {
            inline app::GenericPoser__Class* type_info_ref = nullptr;
        }
        inline app::GenericPoser__Class** type_info = &type_info_ref;
        inline app::GenericPoser__Class* get_class() {
            return il2cpp::get_class<app::GenericPoser__Class>(type_info, "RootMotion.FinalIK", "GenericPoser");
        }
        inline app::GenericPoser* create() {
            return il2cpp::create_object<app::GenericPoser>(get_class());
        }
    } // namespace GenericPoser
} // namespace app::classes::types
