#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EP2PSend__Enum.h>
#include <Modloader/app/structs/ESNetSocketConnectionType__Enum.h>
#include <Modloader/app/structs/P2PSessionState_t.h>
#include <Modloader/app/structs/SNetListenSocket_t.h>
#include <Modloader/app/structs/SNetSocket_t.h>

namespace app::classes::Steamworks::SteamNetworking {
    IL2CPP_REGISTER_METHOD(
        0x0278E260,
        bool,
        SendP2PPacket,
        app::CSteamID steam_i_d_remote,
        app::Byte__Array* pub_data,
        uint32_t cub_data,
        app::EP2PSend__Enum e_p2_p_send_type,
        int32_t n_channel
    )
    IL2CPP_REGISTER_METHOD(0x0278E2D0, bool, IsP2PPacketAvailable, uint32_t* pcub_msg_size, int32_t n_channel)
    IL2CPP_REGISTER_METHOD(
        0x0278E310,
        bool,
        ReadP2PPacket,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size,
        app::CSteamID* psteam_i_d_remote,
        int32_t n_channel
    )
    IL2CPP_REGISTER_METHOD(0x0278E380, bool, AcceptP2PSessionWithUser, app::CSteamID steam_i_d_remote)
    IL2CPP_REGISTER_METHOD(0x0278E3B0, bool, CloseP2PSessionWithUser, app::CSteamID steam_i_d_remote)
    IL2CPP_REGISTER_METHOD(0x0278E3E0, bool, CloseP2PChannelWithUser, app::CSteamID steam_i_d_remote, int32_t n_channel)
    IL2CPP_REGISTER_METHOD(0x0278E420, bool, GetP2PSessionState, app::CSteamID steam_i_d_remote, app::P2PSessionState_t* p_connection_state)
    IL2CPP_REGISTER_METHOD(0x0278E460, bool, AllowP2PPacketRelay, bool b_allow)
    IL2CPP_REGISTER_METHOD(
        0x0278E490,
        app::SNetListenSocket_t,
        CreateListenSocket,
        int32_t n_virtual_p2_p_port,
        uint32_t n_i_p,
        uint16_t n_port,
        bool b_allow_use_of_packet_relay
    )
    IL2CPP_REGISTER_METHOD(
        0x0278E500,
        app::SNetSocket_t,
        CreateP2PConnectionSocket,
        app::CSteamID steam_i_d_target,
        int32_t n_virtual_port,
        int32_t n_timeout_sec,
        bool b_allow_use_of_packet_relay
    )
    IL2CPP_REGISTER_METHOD(0x0278E570, app::SNetSocket_t, CreateConnectionSocket, uint32_t n_i_p, uint16_t n_port, int32_t n_timeout_sec)
    IL2CPP_REGISTER_METHOD(0x0278E5C0, bool, DestroySocket, app::SNetSocket_t h_socket, bool b_notify_remote_end)
    IL2CPP_REGISTER_METHOD(0x0278E600, bool, DestroyListenSocket, app::SNetListenSocket_t h_socket, bool b_notify_remote_end)
    IL2CPP_REGISTER_METHOD(0x0278E640, bool, SendDataOnSocket, app::SNetSocket_t h_socket, app::Byte__Array* pub_data, uint32_t cub_data, bool b_reliable)
    IL2CPP_REGISTER_METHOD(0x0278E6B0, bool, IsDataAvailableOnSocket, app::SNetSocket_t h_socket, uint32_t* pcub_msg_size)
    IL2CPP_REGISTER_METHOD(
        0x0278E6F0,
        bool,
        RetrieveDataFromSocket,
        app::SNetSocket_t h_socket,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size
    )
    IL2CPP_REGISTER_METHOD(0x0278E750, bool, IsDataAvailable, app::SNetListenSocket_t h_listen_socket, uint32_t* pcub_msg_size, app::SNetSocket_t* ph_socket)
    IL2CPP_REGISTER_METHOD(
        0x0278E7A0,
        bool,
        RetrieveData,
        app::SNetListenSocket_t h_listen_socket,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size,
        app::SNetSocket_t* ph_socket
    )
    IL2CPP_REGISTER_METHOD(
        0x0278E810,
        bool,
        GetSocketInfo,
        app::SNetSocket_t h_socket,
        app::CSteamID* p_steam_i_d_remote,
        int32_t* pe_socket_status,
        uint32_t* pun_i_p_remote,
        uint16_t* pun_port_remote
    )
    IL2CPP_REGISTER_METHOD(0x0278E880, bool, GetListenSocketInfo, app::SNetListenSocket_t h_listen_socket, uint32_t* pn_i_p, uint16_t* pn_port)
    IL2CPP_REGISTER_METHOD(0x0278E8D0, app::ESNetSocketConnectionType__Enum, GetSocketConnectionType, app::SNetSocket_t h_socket)
    IL2CPP_REGISTER_METHOD(0x0278E900, int32_t, GetMaxPacketSize, app::SNetSocket_t h_socket)
} // namespace app::classes::Steamworks::SteamNetworking
