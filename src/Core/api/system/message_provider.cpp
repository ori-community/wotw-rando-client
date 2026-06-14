#include <Core/api/system/message_provider.h>
#include <Modloader/app/types/TranslatedMessageProvider.h>


namespace core::api::system {
    using namespace app::classes;

    app::TranslatedMessageProvider* instantiate_empty_translated_message_provider() {
        static std::optional<il2cpp::WeakGCRef<app::TranslatedMessageProvider>> empty_instance_cache_ref = std::nullopt;

        const auto empty_instance_cache = empty_instance_cache_ref.and_then([](auto& ref) { return *ref; });

        if (!empty_instance_cache.has_value()) {
            const auto empty_instance = types::TranslatedMessageProvider::create();
            TranslatedMessageProvider::ctor(empty_instance);
            empty_instance_cache_ref = il2cpp::WeakGCRef(empty_instance);
            return il2cpp::unity::instantiate_object(empty_instance);
        }

        return il2cpp::unity::instantiate_object(*empty_instance_cache);
    }

    app::MessageProvider* create_message_provider(const Property<std::string>& property) {
        auto provider = instantiate_empty_translated_message_provider();
        add_to_message_provider(provider, property.get());
        return reinterpret_cast<app::MessageProvider*>(provider);
    }
} // namespace core::api::system
