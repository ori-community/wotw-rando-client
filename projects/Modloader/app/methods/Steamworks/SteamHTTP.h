#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HTTPRequestHandle.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EHTTPMethod__Enum.h>
#include <Modloader/app/structs/HTTPCookieContainerHandle.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamHTTP {
    IL2CPP_REGISTER_METHOD(0x02780440, app::HTTPRequestHandle, CreateHTTPRequest, (app::EHTTPMethod__Enum e_h_t_t_p_request_method, app::String* pch_absolute_u_r_l))
    IL2CPP_REGISTER_METHOD(0x02780680, bool, SetHTTPRequestContextValue, (app::HTTPRequestHandle h_request, uint64_t ul_context_value))
    IL2CPP_REGISTER_METHOD(0x027806C0, bool, SetHTTPRequestNetworkActivityTimeout, (app::HTTPRequestHandle h_request, uint32_t un_timeout_seconds))
    IL2CPP_REGISTER_METHOD(0x02780700, bool, SetHTTPRequestHeaderValue, (app::HTTPRequestHandle h_request, app::String* pch_header_name, app::String* pch_header_value))
    IL2CPP_REGISTER_METHOD(0x02780A40, bool, SetHTTPRequestGetOrPostParameter, (app::HTTPRequestHandle h_request, app::String* pch_param_name, app::String* pch_param_value))
    IL2CPP_REGISTER_METHOD(0x02780D80, bool, SendHTTPRequest, (app::HTTPRequestHandle h_request, app::SteamAPICall_t* p_call_handle))
    IL2CPP_REGISTER_METHOD(0x02780DC0, bool, SendHTTPRequestAndStreamResponse, (app::HTTPRequestHandle h_request, app::SteamAPICall_t* p_call_handle))
    IL2CPP_REGISTER_METHOD(0x02780E00, bool, DeferHTTPRequest, (app::HTTPRequestHandle h_request))
    IL2CPP_REGISTER_METHOD(0x02780E30, bool, PrioritizeHTTPRequest, (app::HTTPRequestHandle h_request))
    IL2CPP_REGISTER_METHOD(0x02780E60, bool, GetHTTPResponseHeaderSize, (app::HTTPRequestHandle h_request, app::String* pch_header_name, uint32_t* un_response_header_size))
    IL2CPP_REGISTER_METHOD(0x02781090, bool, GetHTTPResponseHeaderValue, (app::HTTPRequestHandle h_request, app::String* pch_header_name, app::Byte__Array* p_header_value_buffer, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x027812B0, bool, GetHTTPResponseBodySize, (app::HTTPRequestHandle h_request, uint32_t* un_body_size))
    IL2CPP_REGISTER_METHOD(0x027812F0, bool, GetHTTPResponseBodyData, (app::HTTPRequestHandle h_request, app::Byte__Array* p_body_data_buffer, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x02781340, bool, GetHTTPStreamingResponseBodyData, (app::HTTPRequestHandle h_request, uint32_t c_offset, app::Byte__Array* p_body_data_buffer, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x027813A0, bool, ReleaseHTTPRequest, (app::HTTPRequestHandle h_request))
    IL2CPP_REGISTER_METHOD(0x027813D0, bool, GetHTTPDownloadProgressPct, (app::HTTPRequestHandle h_request, float* pfl_percent_out))
    IL2CPP_REGISTER_METHOD(0x02781410, bool, SetHTTPRequestRawPostBody, (app::HTTPRequestHandle h_request, app::String* pch_content_type, app::Byte__Array* pub_body, uint32_t un_body_len))
    IL2CPP_REGISTER_METHOD(0x02781630, app::HTTPCookieContainerHandle, CreateCookieContainer, (bool b_allow_responses_to_modify))
    IL2CPP_REGISTER_METHOD(0x027816E0, bool, ReleaseCookieContainer, (app::HTTPCookieContainerHandle h_cookie_container))
    IL2CPP_REGISTER_METHOD(0x02781710, bool, SetCookie, (app::HTTPCookieContainerHandle h_cookie_container, app::String* pch_host, app::String* pch_url, app::String* pch_cookie))
    IL2CPP_REGISTER_METHOD(0x02781B80, bool, SetHTTPRequestCookieContainer, (app::HTTPRequestHandle h_request, app::HTTPCookieContainerHandle h_cookie_container))
    IL2CPP_REGISTER_METHOD(0x02781BC0, bool, SetHTTPRequestUserAgentInfo, (app::HTTPRequestHandle h_request, app::String* pch_user_agent_info))
    IL2CPP_REGISTER_METHOD(0x02781DE0, bool, SetHTTPRequestRequiresVerifiedCertificate, (app::HTTPRequestHandle h_request, bool b_require_verified_certificate))
    IL2CPP_REGISTER_METHOD(0x02781E20, bool, SetHTTPRequestAbsoluteTimeoutMS, (app::HTTPRequestHandle h_request, uint32_t un_milliseconds))
    IL2CPP_REGISTER_METHOD(0x02781E60, bool, GetHTTPRequestWasTimedOut, (app::HTTPRequestHandle h_request, bool* pb_was_timed_out))
} // namespace app::classes::Steamworks::SteamHTTP
