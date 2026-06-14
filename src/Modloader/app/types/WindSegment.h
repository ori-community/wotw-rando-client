#pragma once
#include <Modloader/app/structs/WindSegment.h>
#include <Modloader/app/structs/WindSegment__Array.h>
#include <Modloader/app/structs/WindSegment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindSegment {
        inline app::WindSegment__Class** type_info() {
            static app::WindSegment__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindSegment__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindSegment__Class* get_class() {
            return il2cpp::get_class<app::WindSegment__Class>(type_info(), "", "WindSegment");
        }
        inline app::WindSegment* create() {
            return il2cpp::create_object<app::WindSegment>(get_class());
        }
        inline app::WindSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::WindSegment__Array>(get_class(), size);
        }
        inline app::WindSegment__Array* create_array(const std::vector<app::WindSegment*>& items) {
            return il2cpp::array_new<app::WindSegment__Array>(get_class(), items);
        }
    } // namespace WindSegment
} // namespace app::classes::types
