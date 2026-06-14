#pragma once
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/LabelTarget__Array.h>
#include <Modloader/app/structs/LabelTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LabelTarget {
        inline app::LabelTarget__Class** type_info() {
            static app::LabelTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LabelTarget__Class**)(modloader::win::memory::resolve_rva(0x04703260));
            }
            return cache;
        }
        inline app::LabelTarget__Class* get_class() {
            return il2cpp::get_class<app::LabelTarget__Class>(type_info(), "System.Linq.Expressions", "LabelTarget");
        }
        inline app::LabelTarget* create() {
            return il2cpp::create_object<app::LabelTarget>(get_class());
        }
        inline app::LabelTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelTarget__Array>(get_class(), size);
        }
        inline app::LabelTarget__Array* create_array(const std::vector<app::LabelTarget*>& items) {
            return il2cpp::array_new<app::LabelTarget__Array>(get_class(), items);
        }
    } // namespace LabelTarget
} // namespace app::classes::types
