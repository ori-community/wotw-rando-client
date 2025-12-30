#include <Core/api/system/message_provider.h>


namespace core::api::system {
    using namespace app::classes;

    app::TranslatedMessageProvider* instantiate_empty_translated_message_provider() {
        static std::optional<il2cpp::WeakGCRef<app::TranslatedMessageProvider>> empty_instance_cache = std::nullopt;

        if (!empty_instance_cache.has_value() || !empty_instance_cache->is_valid()) {
            const auto empty_instance = types::TranslatedMessageProvider::create();
            TranslatedMessageProvider::ctor(empty_instance);
            empty_instance_cache = il2cpp::WeakGCRef(empty_instance);
            return il2cpp::unity::instantiate_object(empty_instance);
        }

        return il2cpp::unity::instantiate_object(**empty_instance_cache);
    }
} // namespace core::api::system
