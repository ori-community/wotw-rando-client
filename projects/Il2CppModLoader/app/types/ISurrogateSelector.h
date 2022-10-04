#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISurrogateSelector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISurrogateSelector__Class** type_info;
        inline app::ISurrogateSelector__Class* get_class() {
            return il2cpp::get_class<app::ISurrogateSelector__Class>(type_info, "System.Runtime.Serialization", "ISurrogateSelector");
        }
        inline app::ISurrogateSelector* create() {
            return il2cpp::create_object<app::ISurrogateSelector>(get_class());
        }
    } // namespace ISurrogateSelector
} // namespace app::classes::types
