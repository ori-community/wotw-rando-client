#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpRequestCreator__Class.h>
#include <Modloader/app/structs/HttpRequestCreator.h>

namespace app::classes::types {
    namespace HttpRequestCreator {
        inline app::HttpRequestCreator__Class** type_info = (app::HttpRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x047454E0));
        inline app::HttpRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestCreator__Class>(type_info, "System.Net", "HttpRequestCreator");
        }
        inline app::HttpRequestCreator* create() {
            return il2cpp::create_object<app::HttpRequestCreator>(get_class());
        }
    } // namespace HttpRequestCreator
} // namespace app::classes::types
