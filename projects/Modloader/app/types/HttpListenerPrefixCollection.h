#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerPrefixCollection__Class.h>
#include <Modloader/app/structs/HttpListenerPrefixCollection.h>

namespace app::classes::types {
    namespace HttpListenerPrefixCollection {
        inline app::HttpListenerPrefixCollection__Class** type_info = (app::HttpListenerPrefixCollection__Class**)(modloader::win::memory::resolve_rva(0x0476EA60));
        inline app::HttpListenerPrefixCollection__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerPrefixCollection__Class>(type_info, "System.Net", "HttpListenerPrefixCollection");
        }
        inline app::HttpListenerPrefixCollection* create() {
            return il2cpp::create_object<app::HttpListenerPrefixCollection>(get_class());
        }
    } // namespace HttpListenerPrefixCollection
} // namespace app::classes::types
