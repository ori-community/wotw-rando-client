#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_DEFINED)
#include <Modloader/app/structs/Method__Enum.h>
#if defined(IL2CPP_STRUCT_Method__Enum_DEFINED)
#define IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_DEFINED
struct Action_1_ActionStatesCallback_;
struct String;
struct IDataReader;
struct IServerCommunicator;
struct Dictionary_2_System_String_System_String_;
struct __declspec(align(8)) Request_1_ActionStatesCallback___Fields {
    struct Action_1_ActionStatesCallback_* m_callback;
    Method__Enum m_method;

    struct String* m_path;
    struct IDataReader* m_dataReader;
    struct IServerCommunicator* m_communicator;
    struct Dictionary_2_System_String_System_String_* m_headers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_FWDDECL)
#define IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_ActionStatesCallback_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IDataReader.h>
#include <Modloader/app/structs/IServerCommunicator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Request_1_ActionStatesCallback___Fields_FWDDECL)
#include <Modloader/app/structs/Request_1_ActionStatesCallback___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Request_1_ActionStatesCallback___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
