#pragma once
#include <Modloader/app/structs/TestEntity.h>
#include <Modloader/app/structs/TestEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TestEntity {
        inline app::TestEntity__Class** type_info() {
            static app::TestEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TestEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TestEntity__Class* get_class() {
            return il2cpp::get_class<app::TestEntity__Class>(type_info(), "", "TestEntity");
        }
        inline app::TestEntity* create() {
            return il2cpp::create_object<app::TestEntity>(get_class());
        }
    } // namespace TestEntity
} // namespace app::classes::types
