#pragma once
#include <Modloader/app/structs/HeaderInfo.h>
#include <Modloader/app/structs/HeaderInfo__Array.h>
#include <Modloader/app/structs/HeaderInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderInfo {
        inline app::HeaderInfo__Class** type_info() {
            static app::HeaderInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HeaderInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B1A8));
            }
            return cache;
        }
        inline app::HeaderInfo__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Class>(type_info(), "System.Net", "HeaderInfo");
        }
        inline app::HeaderInfo* create() {
            return il2cpp::create_object<app::HeaderInfo>(get_class());
        }
        inline app::HeaderInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), size);
        }
        inline app::HeaderInfo__Array* create_array(const std::vector<app::HeaderInfo*>& items) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), items);
        }
    } // namespace HeaderInfo
} // namespace app::classes::types
