#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider_MessageItem {
        inline app::TranslatedMessageProvider_MessageItem__Class** type_info = (app::TranslatedMessageProvider_MessageItem__Class**)(modloader::win::memory::resolve_rva(0x04782BC8));
        inline app::TranslatedMessageProvider_MessageItem__Class* get_class() {
            return il2cpp::get_nested_class<app::TranslatedMessageProvider_MessageItem__Class>(type_info, "", "TranslatedMessageProvider", "MessageItem");
        }
        inline app::TranslatedMessageProvider_MessageItem* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>(get_class());
        }
        inline app::TranslatedMessageProvider_MessageItem__Array* create_array(int size) {
            return il2cpp::array_new<app::TranslatedMessageProvider_MessageItem__Array>(get_class(), size);
        }
        inline app::TranslatedMessageProvider_MessageItem__Array* create_array(const std::vector<app::TranslatedMessageProvider_MessageItem*>& items) {
            return il2cpp::array_new<app::TranslatedMessageProvider_MessageItem__Array>(get_class(), items);
        }
    } // namespace TranslatedMessageProvider_MessageItem
} // namespace app::classes::types
