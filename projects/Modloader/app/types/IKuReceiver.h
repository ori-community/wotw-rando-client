#pragma once
#include <Modloader/app/structs/IKuReceiver.h>
#include <Modloader/app/structs/IKuReceiver__Array.h>
#include <Modloader/app/structs/IKuReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKuReceiver {
        inline app::IKuReceiver__Class** type_info() {
            static app::IKuReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKuReceiver__Class**)(modloader::win::memory::resolve_rva(0x0475EAB8));
            }
            return cache;
        }
        inline app::IKuReceiver__Class* get_class() {
            return il2cpp::get_class<app::IKuReceiver__Class>(type_info(), "", "IKuReceiver");
        }
        inline app::IKuReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::IKuReceiver__Array>(get_class(), size);
        }
        inline app::IKuReceiver__Array* create_array(const std::vector<app::IKuReceiver*>& items) {
            return il2cpp::array_new<app::IKuReceiver__Array>(get_class(), items);
        }
    } // namespace IKuReceiver
} // namespace app::classes::types
