#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#include <Modloader/app/structs/SteamItemDetails_t__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SteamItemDef_t__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/SteamItemDef_t.h>
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/SteamInventoryUpdateHandle_t.h>

namespace app::classes::Steamworks::SteamGameServerInventory {
    IL2CPP_REGISTER_METHOD(0x027FAAF0, app::EResult__Enum, GetResultStatus, (app::SteamInventoryResult_t result_handle))
    IL2CPP_REGISTER_METHOD(0x027FAB20, bool, GetResultItems, (app::SteamInventoryResult_t result_handle, app::SteamItemDetails_t__Array* p_out_items_array, uint32_t* pun_out_items_array_size))
    IL2CPP_REGISTER_METHODINFO(0x0476F668, SteamGameServerInventory_GetResultItems__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027FAC20, bool, GetResultItemProperty, (app::SteamInventoryResult_t result_handle, uint32_t un_item_index, app::String* pch_property_name, app::String** pch_value_buffer, uint32_t* pun_value_buffer_size_out))
    IL2CPP_REGISTER_METHOD(0x027FAED0, uint32_t, GetResultTimestamp, (app::SteamInventoryResult_t result_handle))
    IL2CPP_REGISTER_METHOD(0x027FAF00, bool, CheckResultSteamID, (app::SteamInventoryResult_t result_handle, app::CSteamID steam_i_d_expected))
    IL2CPP_REGISTER_METHOD(0x027FAF40, void, DestroyResult, (app::SteamInventoryResult_t result_handle))
    IL2CPP_REGISTER_METHOD(0x027FAF70, bool, GetAllItems, (app::SteamInventoryResult_t * p_result_handle))
    IL2CPP_REGISTER_METHOD(0x027FAFA0, bool, GetItemsByID, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemInstanceID_t__Array* p_instance_i_ds, uint32_t un_count_instance_i_ds))
    IL2CPP_REGISTER_METHOD(0x027FAFF0, bool, SerializeResult, (app::SteamInventoryResult_t result_handle, app::Byte__Array* p_out_buffer, uint32_t* pun_out_buffer_size))
    IL2CPP_REGISTER_METHOD(0x027FB040, bool, DeserializeResult, (app::SteamInventoryResult_t * p_out_result_handle, app::Byte__Array* p_buffer, uint32_t un_buffer_size, bool b_r_e_s_e_r_v_e_d__m_u_s_t__b_e__f_a_l_s_e))
    IL2CPP_REGISTER_METHOD(0x027FB0B0, bool, GenerateItems, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemDef_t__Array* p_array_item_defs, app::UInt32__Array* pun_array_quantity, uint32_t un_array_length))
    IL2CPP_REGISTER_METHOD(0x027FB120, bool, GrantPromoItems, (app::SteamInventoryResult_t * p_result_handle))
    IL2CPP_REGISTER_METHOD(0x027FB150, bool, AddPromoItem, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemDef_t item_def))
    IL2CPP_REGISTER_METHOD(0x027FB190, bool, AddPromoItems, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemDef_t__Array* p_array_item_defs, uint32_t un_array_length))
    IL2CPP_REGISTER_METHOD(0x027FB1E0, bool, ConsumeItem, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemInstanceID_t item_consume, uint32_t un_quantity))
    IL2CPP_REGISTER_METHOD(0x027FB230, bool, ExchangeItems, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemDef_t__Array* p_array_generate, app::UInt32__Array* pun_array_generate_quantity, uint32_t un_array_generate_length, app::SteamItemInstanceID_t__Array* p_array_destroy, app::UInt32__Array* pun_array_destroy_quantity, uint32_t un_array_destroy_length))
    IL2CPP_REGISTER_METHOD(0x027FB2C0, bool, TransferItemQuantity, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemInstanceID_t item_id_source, uint32_t un_quantity, app::SteamItemInstanceID_t item_id_dest))
    IL2CPP_REGISTER_METHOD(0x027FB330, void, SendItemDropHeartbeat, ())
    IL2CPP_REGISTER_METHOD(0x027FB350, bool, TriggerItemDrop, (app::SteamInventoryResult_t * p_result_handle, app::SteamItemDef_t drop_list_definition))
    IL2CPP_REGISTER_METHOD(0x027FB390, bool, TradeItems, (app::SteamInventoryResult_t * p_result_handle, app::CSteamID steam_i_d_trade_partner, app::SteamItemInstanceID_t__Array* p_array_give, app::UInt32__Array* p_array_give_quantity, uint32_t n_array_give_length, app::SteamItemInstanceID_t__Array* p_array_get, app::UInt32__Array* p_array_get_quantity, uint32_t n_array_get_length))
    IL2CPP_REGISTER_METHOD(0x027FB430, bool, LoadItemDefinitions, ())
    IL2CPP_REGISTER_METHOD(0x027FB450, bool, GetItemDefinitionIDs, (app::SteamItemDef_t__Array * p_item_def_i_ds, uint32_t* pun_item_def_i_ds_array_size))
    IL2CPP_REGISTER_METHODINFO(0x04705248, SteamGameServerInventory_GetItemDefinitionIDs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027FB540, bool, GetItemDefinitionProperty, (app::SteamItemDef_t i_definition, app::String* pch_property_name, app::String** pch_value_buffer, uint32_t* pun_value_buffer_size_out))
    IL2CPP_REGISTER_METHOD(0x027FB7E0, app::SteamAPICall_t, RequestEligiblePromoItemDefinitionsIDs, (app::CSteamID steam_i_d))
    IL2CPP_REGISTER_METHOD(0x027FB890, bool, GetEligiblePromoItemDefinitionIDs, (app::CSteamID steam_i_d, app::SteamItemDef_t__Array* p_item_def_i_ds, uint32_t* pun_item_def_i_ds_array_size))
    IL2CPP_REGISTER_METHODINFO(0x04760390, SteamGameServerInventory_GetEligiblePromoItemDefinitionIDs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027FB990, app::SteamAPICall_t, StartPurchase, (app::SteamItemDef_t__Array * p_array_item_defs, app::UInt32__Array* pun_array_quantity, uint32_t un_array_length))
    IL2CPP_REGISTER_METHOD(0x027FBA70, app::SteamAPICall_t, RequestPrices, ())
    IL2CPP_REGISTER_METHOD(0x027FBB20, uint32_t, GetNumItemsWithPrices, ())
    IL2CPP_REGISTER_METHOD(0x027FBB40, bool, GetItemsWithPrices, (app::SteamItemDef_t__Array * p_array_item_defs, app::UInt64__Array* p_current_prices, app::UInt64__Array* p_base_prices, uint32_t un_array_length))
    IL2CPP_REGISTER_METHODINFO(0x04702E10, SteamGameServerInventory_GetItemsWithPrices__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027FBCF0, bool, GetItemPrice, (app::SteamItemDef_t i_definition, uint64_t* p_current_price, uint64_t* p_base_price))
    IL2CPP_REGISTER_METHOD(0x027FBD40, app::SteamInventoryUpdateHandle_t, StartUpdateProperties, ())
    IL2CPP_REGISTER_METHOD(0x027FBDF0, bool, RemoveProperty, (app::SteamInventoryUpdateHandle_t handle, app::SteamItemInstanceID_t n_item_i_d, app::String* pch_property_name))
    IL2CPP_REGISTER_METHOD(0x027FC020, bool, SetProperty_1, (app::SteamInventoryUpdateHandle_t handle, app::SteamItemInstanceID_t n_item_i_d, app::String* pch_property_name, app::String* pch_property_value))
    IL2CPP_REGISTER_METHOD(0x027FC370, bool, SetProperty_2, (app::SteamInventoryUpdateHandle_t handle, app::SteamItemInstanceID_t n_item_i_d, app::String* pch_property_name, bool b_value))
    IL2CPP_REGISTER_METHOD(0x027FC5A0, bool, SetProperty1, (app::SteamInventoryUpdateHandle_t handle, app::SteamItemInstanceID_t n_item_i_d, app::String* pch_property_name, int64_t n_value))
    IL2CPP_REGISTER_METHOD(0x027FC7D0, bool, SetProperty2, (app::SteamInventoryUpdateHandle_t handle, app::SteamItemInstanceID_t n_item_i_d, app::String* pch_property_name, float fl_value))
    IL2CPP_REGISTER_METHOD(0x027FCA10, bool, SubmitUpdateProperties, (app::SteamInventoryUpdateHandle_t handle, app::SteamInventoryResult_t* p_result_handle))
} // namespace app::classes::Steamworks::SteamGameServerInventory
