#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::SteamEncryptedAppTicket {
    IL2CPP_REGISTER_METHOD(0x016022C0, bool, BDecryptTicket, (app::Byte__Array * rgub_ticket_encrypted, uint32_t cub_ticket_encrypted, app::Byte__Array* rgub_ticket_decrypted, uint32_t* pcub_ticket_decrypted, app::Byte__Array* rgub_key, int32_t cub_key))
    IL2CPP_REGISTER_METHOD(0x016023C0, bool, BIsTicketForApp, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted, app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x01602480, uint32_t, GetTicketIssueTime, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted))
    IL2CPP_REGISTER_METHOD(0x01602530, void, GetTicketSteamID, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted, app::CSteamID* psteam_i_d))
    IL2CPP_REGISTER_METHOD(0x016025F0, uint32_t, GetTicketAppID, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted))
    IL2CPP_REGISTER_METHOD(0x016026A0, bool, BUserOwnsAppInTicket, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted, app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x01602760, bool, BUserIsVacBanned, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted))
    IL2CPP_REGISTER_METHOD(0x027E9A40, app::Byte__Array*, GetUserVariableData, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted, uint32_t* pcub_user_data))
    IL2CPP_REGISTER_METHOD(0x016028E0, bool, BIsTicketSigned, (app::Byte__Array * rgub_ticket_decrypted, uint32_t cub_ticket_decrypted, app::Byte__Array* pub_r_s_a_key, uint32_t cub_r_s_a_key))
} // namespace app::classes::Steamworks::SteamEncryptedAppTicket
