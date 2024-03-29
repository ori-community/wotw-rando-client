#pragma once
#include <Modloader/app/structs/UberPostProcess.h>
#include <Modloader/app/structs/UberPostProcess__Array.h>
#include <Modloader/app/structs/UberPostProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPostProcess {
        inline app::UberPostProcess__Class** type_info() {
            static app::UberPostProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPostProcess__Class**)(modloader::win::memory::resolve_rva(0x04781B50));
            }
            return cache;
        }
        inline app::UberPostProcess__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcess__Class>(type_info(), "", "UberPostProcess");
        }
        inline app::UberPostProcess* create() {
            return il2cpp::create_object<app::UberPostProcess>(get_class());
        }
        inline app::UberPostProcess__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPostProcess__Array>(get_class(), size);
        }
        inline app::UberPostProcess__Array* create_array(const std::vector<app::UberPostProcess*>& items) {
            return il2cpp::array_new<app::UberPostProcess__Array>(get_class(), items);
        }
    } // namespace UberPostProcess
} // namespace app::classes::types
