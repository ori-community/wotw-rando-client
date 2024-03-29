#pragma once
#include <Modloader/app/structs/SslPolicyErrors__Enum.h>
#include <Modloader/app/structs/SslPolicyErrors__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SslPolicyErrors__Enum {
        inline app::SslPolicyErrors__Enum__Class** type_info() {
            static app::SslPolicyErrors__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SslPolicyErrors__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471D588));
            }
            return cache;
        }
        inline app::SslPolicyErrors__Enum__Class* get_class() {
            return il2cpp::get_class<app::SslPolicyErrors__Enum__Class>(type_info(), "System.Net.Security", "SslPolicyErrors");
        }
        inline app::SslPolicyErrors__Enum* create() {
            return il2cpp::create_object<app::SslPolicyErrors__Enum>(get_class());
        }
    } // namespace SslPolicyErrors__Enum
} // namespace app::classes::types
