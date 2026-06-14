#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptor_DEFINED)
#define IL2CPP_STRUCT_EventDescriptor_DEFINED
struct EventDescriptor {
    int32_t m_traceloggingId;
    uint16_t m_id;
    uint8_t m_version;
    uint8_t m_channel;
    uint8_t m_level;
    uint8_t m_opcode;
    uint16_t m_task;
    int64_t m_keywords;
};
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptor_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptor_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptor_FWDDECL)
#include <Modloader/app/structs/EventDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
