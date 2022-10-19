#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonStringContract {
        inline app::JsonStringContract__Class** type_info = (app::JsonStringContract__Class**)(modloader::win::memory::resolve_rva(0x0470D598));
        inline app::JsonStringContract__Class* get_class() {
            return il2cpp::get_class<app::JsonStringContract__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonStringContract");
        }
        inline app::JsonStringContract* create() {
            return il2cpp::create_object<app::JsonStringContract>(get_class());
        }
    } // namespace JsonStringContract
} // namespace app::classes::types
