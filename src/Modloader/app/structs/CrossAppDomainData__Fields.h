#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainData__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainData__Fields_DEFINED
struct Object;
struct String;
struct __declspec(align(8)) CrossAppDomainData__Fields {
    struct Object* _ContextID;
    int32_t _DomainID;
    struct String* _processGuid;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainData__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainData__Fields_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
