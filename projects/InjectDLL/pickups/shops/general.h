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
        uint32_t locked = 0;
        textures::TextureData texture;
        bool uses_energy = false;
    };

    bool is_in_shop(ShopType type);
    ShopType get_open_shop();
    void set_providers(ShopType type, app::ShopkeeperItem* shop_item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider, app::MessageProvider*& locked_provider);
    textures::TextureData get_icon(ShopType type, app::ShopkeeperItem* shop_item);
    void set_opher_providers(app::ShopkeeperItem* shop_item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider, app::MessageProvider*& locked_provider);
    textures::TextureData get_opher_icon(app::ShopkeeperItem* shop_item);
    void set_item(ShopItem& item, const wchar_t* name, const wchar_t* description, const wchar_t* texture, const wchar_t* locked, bool uses_energy);
}