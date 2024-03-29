#pragma once
#include <Modloader/app/structs/ICameraTarget.h>
#include <Modloader/app/structs/ICameraTarget__Array.h>
#include <Modloader/app/structs/ICameraTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICameraTarget {
        inline app::ICameraTarget__Class** type_info() {
            static app::ICameraTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICameraTarget__Class**)(modloader::win::memory::resolve_rva(0x04781FE0));
            }
            return cache;
        }
        inline app::ICameraTarget__Class* get_class() {
            return il2cpp::get_class<app::ICameraTarget__Class>(type_info(), "", "ICameraTarget");
        }
        inline app::ICameraTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::ICameraTarget__Array>(get_class(), size);
        }
        inline app::ICameraTarget__Array* create_array(const std::vector<app::ICameraTarget*>& items) {
            return il2cpp::array_new<app::ICameraTarget__Array>(get_class(), items);
        }
    } // namespace ICameraTarget
} // namespace app::classes::types
