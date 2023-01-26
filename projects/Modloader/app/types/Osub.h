#pragma once
#include <Modloader/app/structs/Osub.h>
#include <Modloader/app/structs/Osub__Array.h>
#include <Modloader/app/structs/Osub__Boxed.h>
#include <Modloader/app/structs/Osub__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Osub {
        inline app::Osub__Class** type_info() {
            static app::Osub__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Osub__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Osub__Class* get_class() {
            return il2cpp::get_class<app::Osub__Class>(type_info(), "TriangleNet.Topology", "Osub");
        }
        inline app::Osub* create() {
            return il2cpp::create_object<app::Osub>(get_class());
        }
        inline app::Osub__Boxed* box(app::Osub value) {
            return il2cpp::box_value<app::Osub__Boxed>(get_class(), value);
        }
        inline app::Osub__Array* create_array(int size) {
            return il2cpp::array_new<app::Osub__Array>(get_class(), size);
        }
        inline app::Osub__Array* create_array(const std::vector<app::Osub>& items) {
            return il2cpp::array_new<app::Osub__Array>(get_class(), items);
        }
    } // namespace Osub
} // namespace app::classes::types
