#pragma once
#include <Modloader/app/structs/UberPoolGroupWarmer.h>
#include <Modloader/app/structs/UberPoolGroupWarmer__Array.h>
#include <Modloader/app/structs/UberPoolGroupWarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer {
        inline app::UberPoolGroupWarmer__Class** type_info() {
            static app::UberPoolGroupWarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPoolGroupWarmer__Class**)(modloader::win::memory::resolve_rva(0x0476DDB0));
            }
            return cache;
        }
        inline app::UberPoolGroupWarmer__Class* get_class() {
            return il2cpp::get_class<app::UberPoolGroupWarmer__Class>(type_info(), "", "UberPoolGroupWarmer");
        }
        inline app::UberPoolGroupWarmer* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer>(get_class());
        }
        inline app::UberPoolGroupWarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroupWarmer__Array>(get_class(), size);
        }
        inline app::UberPoolGroupWarmer__Array* create_array(const std::vector<app::UberPoolGroupWarmer*>& items) {
            return il2cpp::array_new<app::UberPoolGroupWarmer__Array>(get_class(), items);
        }
    } // namespace UberPoolGroupWarmer
} // namespace app::classes::types
