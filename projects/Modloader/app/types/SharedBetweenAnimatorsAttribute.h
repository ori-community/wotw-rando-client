#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SharedBetweenAnimatorsAttribute {
        namespace {
            inline app::SharedBetweenAnimatorsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SharedBetweenAnimatorsAttribute__Class** type_info = &type_info_ref;
        inline app::SharedBetweenAnimatorsAttribute__Class* get_class() {
            return il2cpp::get_class<app::SharedBetweenAnimatorsAttribute__Class>(type_info, "UnityEngine", "SharedBetweenAnimatorsAttribute");
        }
        inline app::SharedBetweenAnimatorsAttribute* create() {
            return il2cpp::create_object<app::SharedBetweenAnimatorsAttribute>(get_class());
        }
    } // namespace SharedBetweenAnimatorsAttribute
} // namespace app::classes::types
