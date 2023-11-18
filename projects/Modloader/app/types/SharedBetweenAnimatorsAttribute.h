#pragma once
#include <Modloader/app/structs/SharedBetweenAnimatorsAttribute.h>
#include <Modloader/app/structs/SharedBetweenAnimatorsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedBetweenAnimatorsAttribute {
        inline app::SharedBetweenAnimatorsAttribute__Class** type_info() {
            static app::SharedBetweenAnimatorsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SharedBetweenAnimatorsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SharedBetweenAnimatorsAttribute__Class* get_class() {
            return il2cpp::get_class<app::SharedBetweenAnimatorsAttribute__Class>(type_info(), "UnityEngine", "SharedBetweenAnimatorsAttribute");
        }
        inline app::SharedBetweenAnimatorsAttribute* create() {
            return il2cpp::create_object<app::SharedBetweenAnimatorsAttribute>(get_class());
        }
    } // namespace SharedBetweenAnimatorsAttribute
} // namespace app::classes::types
