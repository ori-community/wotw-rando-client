#pragma once

#include <system/textures.h>

namespace shops
{
    enum class ShopType
    {
        None,
        Lupo,
        Grom,
        Opher,
        Twillen,
        Tuley,
        TOTAL
    };

    struct ShopItem
    {
        uint32_t name = 0;
        uint32_t description = 0;
        std::shared_ptr<textures::TextureData> texture_data;
        bool uses_energy = false;
        bool is_locked = false;
        bool is_visible = true;
    };

    bool is_in_shop(ShopType type);
    ShopType get_open_shop();

    void set_providers(ShopType type, app::ShopkeeperItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider);
    void set_opher_providers(app::WeaponmasterItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider);
    void set_grom_providers(app::BuilderItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider);

    std::shared_ptr<textures::TextureData> get_icon(ShopType type, void* shop_item);
    std::shared_ptr<textures::TextureData> get_opher_icon(app::WeaponmasterItem* shop_item);
    std::shared_ptr<textures::TextureData> get_twillen_icon(app::UpgradableShardItem* shop_item);
    std::shared_ptr<textures::TextureData> get_lupo_icon(app::MapmakerItem* shop_item);

    void set_item(ShopItem& item, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool uses_energy, bool is_locked, bool is_visible);
}