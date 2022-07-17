#pragma once

//�η� �繫�� ���� gpu�� ������ �� ������ ����ϴ� �Լ�
//������ü ���� ���
class Device
{
public:
	void Init();

	ComPtr<IDXGIFactory> GetDXG1() { return _dxgi };
	ComPtr<ID3D12Device> GetDevice() { return _device };
private:
	// COM (Component Object Model)
	// DX�� ���α׷��� ��� �������� ���� ȣȯ���� �����ϰ� �ϴ� ���
	// COM��ü(COM �������̽�)�� ���, ���λ����� �츮���� ������
	// ComPrt ������ ����Ʈ ������
	ComPtr<ID3D12Debug> _debugController; 
	ComPtr<IDXGIFactory> _dxgi; //ȭ�� ���� ��ɵ�
	ComPtr<ID3D12Device> _device;//���� ��ü ����

};

