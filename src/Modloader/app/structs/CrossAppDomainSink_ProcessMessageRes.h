#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_DEFINED
struct Byte__Array;
struct CADMethodReturnMessage;
struct CrossAppDomainSink_ProcessMessageRes {
    struct Byte__Array* arrResponse;
    struct CADMethodReturnMessage* cadMrm;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CADMethodReturnMessage.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainSink_ProcessMessageRes_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainSink_ProcessMessageRes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
