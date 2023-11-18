#pragma once
#include <Modloader/app/structs/UberPoolGroup.h>
#include <Modloader/app/structs/UberPoolGroup__Array.h>
#include <Modloader/app/structs/UberPoolGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroup {
        inline app::UberPoolGroup__Class** type_info() {
            static app::UberPoolGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolGroup__Class**)(modloader::win::memory::resolve_rva(0x047779B8));
            }
            return cache;
        }
        inline app::UberPoolGroup__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroup__Class>(type_info(), "", "UberPoolGroup");
        }
        inline app::UberPoolGroup* create() {
            return il2cpp::create_object<app::UberPoolGroup>(get_class());
        }
        inline app::UberPoolGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroup__Array>(get_class(), size);
        }
        inline app::UberPoolGroup__Array* create_array(const std::vector<app::UberPoolGroup*>& items) {
            return il2cpp::array_new<app::UberPoolGroup__Array>(get_class(), items);
        }
    } // namespace UberPoolGroup
} // namespace app::classes::types
